INSTALL=@INSTALL@
CC=@CC@
LIBS=@LIBS@
CFLAGS = @CFLAGS@
OBJECTS=nbtscan.o statusq.o range.o list.o
DEFS=@DEFS@
TARGET=@TARGET@

prefix      = @prefix@
exec_prefix = @exec_prefix@
BINDIR      = @bindir@

all: nbtscan

nbtscan: $(OBJECTS)
	$(CC) $(CFLAGS) -o nbtscan $(OBJECTS) $(LIBS) $(LDFLAGS)

install:
	$(INSTALL) $(TARGET) $(DESTDIR)$(BINDIR)/$(TARGET)

nbtscan.o: nbtscan.c statusq.h range.h list.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEFS) -c nbtscan.c

statusq.o: statusq.c statusq.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEFS) -c statusq.c

range.o: range.c range.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEFS) -c range.c

list.o: list.c list.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(DEFS) -c list.c

clean:
	-rm $(OBJECTS) nbtscan
