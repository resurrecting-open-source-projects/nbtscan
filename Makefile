INSTALL=/usr/bin/install -c
CC=gcc
LIBS=
CFLAGS = -g -O2
OBJECTS=nbtscan.o statusq.o range.o list.o
DEFS=-DSTDC_HEADERS=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_UNISTD_H=1 -Dmy_uint8_t=uint8_t -Dmy_uint16_t=uint16_t -Dmy_uint32_t=uint32_t -DTIME_WITH_SYS_TIME=1 -DHAVE_SNPRINTF=1 -DUNIX=1 
TARGET=nbtscan
BINDIR=NONE/bin

nbtscan: $(OBJECTS)
	$(CC) $(CFLAGS) -o nbtscan $(OBJECTS) $(LIBS)

install:
	$(INSTALL) $(TARGET) $(DESTDIR)$(BINDIR)/$(TARGET)

nbtscan.o: nbtscan.c statusq.h range.h list.h
	$(CC) $(CFLAGS) $(DEFS) -c nbtscan.c

statusq.o: statusq.c statusq.h
	$(CC) $(CFLAGS) $(DEFS) -c statusq.c

range.o: range.c range.h
	$(CC) $(CFLAGS) $(DEFS) -c range.c

list.o: list.c list.h
	$(CC) $(CFLAGS) $(DEFS) -c list.c

clean:
	-rm $(OBJECTS) nbtscan

distclean: clean
	-rm config.cache config.log config.status Makefile
