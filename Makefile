# Unix only makefile
-include config.mak

CFLAGS=-Isrc/ -g -fpic -Wall -Wshadow -Wcast-qual -Wpedantic -Werror=incompatible-pointer-types -Werror=deprecated-declarations
CFLAGS+=-D CAMLIB_NO_COMPAT -D VERBOSE

# All platforms need these object files
CAMLIB_CORE=operations.o packet.o enums.o data.o enum_dump.o lib.o canon.o liveview.o bind.o ip.o ml.o log.o conv.o generic.o canon_adv.o
FILES=$(addprefix src/,$(CAMLIB_CORE))

# Unix-specific
CFLAGS+=$(shell pkg-config --cflags libusb-1.0)
LDFLAGS?=$(shell pkg-config --libs libusb-1.0)
FILES+=src/libusb.o src/transport.o

# TODO: implement as CAMLIB_VERSION
COMMIT=$(shell git rev-parse HEAD)
CFLAGS+='-DCAMLIB_COMMIT="$(COMMIT)"'

# TODO: add LDFLAGS to fix mac builds
libcamlib.so: $(FILES)
	$(CC) -shared $(FILES) -o libcamlib.so

%.o: %.c src/*.h
	$(CC) -c $(CFLAGS) $< -o $@

# PTP decoder
DEC_FILES=src/dec/main.o src/enums.o src/enum_dump.o src/packet.o src/conv.o src/log.o
dec: $(DEC_FILES)
	$(CC) $(DEC_FILES) $(CFLAGS) -o $@

# Run this thing frequently
stringify:
	python3 stringify.py

clean:
	rm -rf *.o src/*.o src/dec/*.o *.out test-ci test/*.o examples/*.o *.exe dec *.dll *.so libusb-fake-ptp DUMP
	rm -rf lua/*.o lua/lua-cjson/*.o
	cd examples && make clean

install: libcamlib.so
	cp libcamlib.so /usr/lib/
	-mkdir /usr/include/camlib
	cp src/*.h /usr/include/camlib/

test-ci: test/test.o $(FILES)
	$(CC) test/test.o $(FILES) $(LDFLAGS) $(CFLAGS) -o test-ci
test:
	bash test/myci.sh

.PHONY: all clean install stringify test
