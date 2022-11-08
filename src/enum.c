#include <string.h>
#include "enum.h"

int ptp_enum(char *string) {
	for (int i = 0; i < ptp_enums_length; i++) {
		if (!strcmp(string, ptp_enums[i].name)) {
			return ptp_enums[i].value;
		}
	}

	return -1;
}

char *ptp_get_enum(int id) {
	for (int i = 0; i < ptp_enums_length; i++) {
		if (id == ptp_enums[i].value) {
			return ptp_enums[i].name;
		}
	}

	return NULL;
}
