CC:=gcc
CFLAGS:=-Wall
CFLAGS_DEBUG:=-g -Wall

all: endian endian_debug endian2

endian: endian.c
	$(CC) endian.c -o endian $(CFLAGS)

endian_debug: endian.c
	$(CC) endian.c -o $@ $(CFLAGS_DEBUG)

endian2: endian2.c
	$(CC) endian2.c -o endian2 $(CFLAGS)


.PHONY: clean

clean:
	rm endian endian_debug endian2
