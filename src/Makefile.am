bin_PROGRAMS = nbtscan

OBJECTS=nbtscan.o statusq.o range.o list.o

nbtscan$(EXEEXT): $(OBJECTS)
	$(CC) $(CFLAGS) -o nbtscan $(OBJECTS) $(LIBS) $(LDFLAGS)

nbtscan.o: nbtscan.c statusq.h range.h list.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEFS) -c nbtscan.c

statusq.o: statusq.c statusq.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEFS) -c statusq.c

range.o: range.c range.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEFS) -c range.c

list.o: list.c list.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEFS) -c list.c
