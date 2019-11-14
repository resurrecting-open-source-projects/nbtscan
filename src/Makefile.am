# Copyright 1999-2003 Alla Bezroutchko <alla@inetcat.org>
# Copyright 2018-2019 Joao Eriberto Mota Filho <eriberto@eriberto.pro.br>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

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
