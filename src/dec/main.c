#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <camlib.h>

int decode_eos_evproc(FILE *f, int length, uint8_t *data) {
	int of = 0;
	char buffer[64];

	of += ptp_read_utf8_string(data + of, buffer, sizeof(buffer));

	uint32_t len, temp, type, val, p3, p4;
	of += ptp_read_u32(data + of, &len);

	fprintf(f, "- Command name: %s\n", buffer);
	fprintf(f, "- Parameters: %u\n", len);

	for (int i = 0; i < (int)len; i++) {
		of += ptp_read_u32(data + of, &type);
		if (type == 2) {
			of += ptp_read_u32(data + of, &val);
			of += ptp_read_u32(data + of, &p3);
			of += ptp_read_u32(data + of, &p4);
			fprintf(f, "- Int param: %X (%X, %X)\n", val, p3, p4);
			of += ptp_read_u32(data + of, &temp); // size
		} else if (type == 4) {
			of += ptp_read_u32(data + of, &val);
			of += ptp_read_u32(data + of, &temp);
			of += ptp_read_u32(data + of, &temp);
			of += ptp_read_u32(data + of, &temp);
			of += ptp_read_u32(data + of, &temp);
			of += ptp_read_u32(data + of, &temp);

			of += ptp_read_utf8_string(data + of, buffer, sizeof(buffer));
			fprintf(f, "- String param: %s\n", buffer);
		} else {
			fprintf(f, "Unknown type %x\n", type);
		}
	}

	return 0;
}

int main(int argc, char *argv[]) {
	if (argc < 3) {
		puts(
			"Usage:\n"
			"ptpd <dump_file> <output_file>");
		return 0;
	}

	FILE *f = fopen(argv[1], "rb");
	if (f == NULL) {
		puts("error opening file");
		return 1;
	}

	fseek(f, 0, SEEK_END);
	long size = ftell(f);
	fseek(f, 0, SEEK_SET);
	char *buffer = malloc(size + 100);
	if (buffer == NULL) return 1;
	fread(buffer, 1, size, f);
	fclose(f);

	f = fopen(argv[2], "w");
	if (f == NULL) {
		puts("error creating file");
		return 1;
	}

	int transaction = -1; // (Indicates unknown transaction)
	int last_type = 0;

	int vendor = PTP_DEV_EOS;

	fprintf(f, "Generated by CamLib PTP Decoder\n");
	fprintf(f, "Parsing file %s\n", argv[2]);

	long addr = 0;
	while (addr < size) {
		struct PtpBulkContainer *c = (struct PtpBulkContainer *)(buffer + addr);

		int vendor_oc = c->code >> 8;

		int filter = 1;
		filter &= c->type == PTP_PACKET_TYPE_COMMAND || c->type == PTP_PACKET_TYPE_DATA
			|| c->type == PTP_PACKET_TYPE_RESPONSE || c->type == PTP_PACKET_TYPE_EVENT;

		if (c->type == PTP_PACKET_TYPE_COMMAND || c->type == PTP_PACKET_TYPE_DATA) {
			filter &= vendor_oc == 0x10 || vendor_oc == 0x90 || vendor_oc == 0x91 || vendor_oc == 0x92 || vendor_oc == 0x98 || vendor_oc == 0xF0;

			// Filter out EOS GetEvent and GetLiveViewData
			filter &= c->code != 0x9116 && c->code != 0x9153;
		} else if (c->type == PTP_PACKET_TYPE_RESPONSE) {
			filter &= vendor_oc == 0x20;
		}

		if (!filter) goto cnt;

		int type = PTP_OC;

		char *newline = "\n";
		if (transaction == -1) newline = "";

		if (c->type == PTP_PACKET_TYPE_COMMAND) {
			if (c->length > sizeof(struct PtpBulkContainer) || c->length < 12) {
				goto cnt;
			}

			if (c->code == PTP_OC_OpenSession) {
				transaction = 0;
			}

			fprintf(f, "%s--- COMMAND Container --- \n", newline);
		} else if (c->type == PTP_PACKET_TYPE_DATA) {
			if (last_type == PTP_PACKET_TYPE_COMMAND) {
				fprintf(f, "--- DATA Container ---\n");
			} else if (last_type == PTP_PACKET_TYPE_DATA) {
				fprintf(f, "%s--- Random DATA Container\n", newline);
			}
		} else if (c->type == PTP_PACKET_TYPE_RESPONSE) {
			fprintf(f, "%s--- RESPONSE Container ---\n", newline);
			type = PTP_RC;
		} else if (c->type == PTP_PACKET_TYPE_EVENT) {
			fprintf(f, "%s--- EVENT Container\n", newline);
			goto cnt;
		}

		char *enm = ptp_get_enum(type, vendor, c->code);
		if (enm == enum_null) {
			enm = "??";
		}

		fprintf(f, "Offset:\t0x%lX\n", addr);
		fprintf(f, "Code:\t(0x%X) %s\n", c->code, enm);
		fprintf(f, "Length:\t(%u)\n", c->length);

		if (c->type == PTP_PACKET_TYPE_COMMAND) {
			fprintf(f, "Params:\t");
			int pl = (c->length - 12) / 4;
			for (int i = 0; i < pl; i++) {
				fprintf(f, "%X ", c->params[i]);
			}
			if (pl == 0) {
				fprintf(f, "No params");
			}
			fprintf(f, "\n");
		}else if (c->type == PTP_PACKET_TYPE_DATA) {
			fprintf(f, "Data:\t");
			int pl = c->length - 12;
			for (int i = 0; i < pl; i++) {
				fprintf(f, "%02X", ((uint8_t *)buffer)[addr + i + 12]);
				if (i >= 50) {
					fprintf(f, "...");
					break;
				}
			}
			if (pl == 0) {
				fprintf(f, "No data");
			}
			fprintf(f, "\n");

			if (c->code == 0x9052) {
				decode_eos_evproc(f, pl, ((uint8_t *)buffer) + addr + 12);
			}
		}

		last_type = c->type;

		if (transaction != -1) {
			transaction++;
		}

		cnt:;
		addr++;
	}

	fclose(f);
	free(buffer);
	return 0;
}
