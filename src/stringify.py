import re

output = "// autogenerated file\n#include \"enum.h\"\nstruct PtpEnum ptp_enums[] = {\n"

string = open("ptp.h", "r").read()

regex = r"#define ([A-Za-z0-9_]+)[ \t]+(0x[0-9a-fA-Z]+)"
matches = re.findall(regex, string)
for i in matches:
    t = re.findall(r"PTP_(OC|PC|OF|EC|RC|PC|ST|FT|AC)_(CANON|FUJI|NIKON|SONY|EOS|)[_]?([A-Za-z0-9_]+)", i[0])
    if len(t) == 0:
        output += "{PTP_ENUM, 0, \"" + i[0] + "\", " + i[1] + "},\n"
    else:
        vendor = t[0][1]
        if t[0][1] == "":
            vendor = "EMPTY"
        output += "{PTP_" + t[0][0] + ", PTP_DEV_" + vendor + ", " + "\"" + t[0][2] + "\", " + i[1] + "},\n"
output += "\n};"

output += "int ptp_enums_length = " + str(len(matches)) + ";\n"

print("Compiled", len(matches), "enums")
f = open("enum_dump.c", "w")
f.write(output)
f.close()
