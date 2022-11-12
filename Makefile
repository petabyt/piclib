-include config.mak

CD?=cd
PYTHON3?=python3
FILES=src/libusb.o src/operations.o src/packet.o src/data.o src/enum_dump.o src/enum.o src/util.o src/canon.o

CFLAGS=-lusb -Isrc/ -Isrc/ -I../mjs/

%.o: %.c src/*.h
	$(CC) -c $(CFLAGS) $< -o $@

src/enum_dump.o: src/ptp.h src/canon.h src/stringify.py
	$(CD) src && $(PYTHON3) stringify.py
	$(CC) -c src/enum_dump.c $(CFLAGS) -o src/enum_dump.o

# Some deps/tweaks for tests
TEST_TARGETS=live script pktest optest
script: ../mjs/mjs.o test/script.o
script: FILES+=../mjs/mjs.o test/script.o
pktest: test/pktest.o
pktest: FILES+=test/pktest.o
optest: test/optest.o
optest: FILES+=test/optest.o
live: test/live.o
live: FILES+=test/live.o
live: CFLAGS+=-lX11

$(TEST_TARGETS): $(FILES)
	$(CC) $(FILES) $(CFLAGS) -o $@

script_test: script
	./script test/connect.js

clean:
	$(RM) *.o src/*.o src/data.c *.out $(TEST_TARGETS) test/*.o
