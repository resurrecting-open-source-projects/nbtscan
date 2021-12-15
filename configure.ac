# Copyright 1999-2003 Alla Bezroutchko <alla@inetcat.org>
# Copyright 2019-2021 Joao Eriberto Mota Filho <eriberto@eriberto.pro.br>
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

dnl Process this file with autoconf to produce a configure script.
AC_PREREQ([2.69])
AC_INIT([nbtscan],[1.7.1],[https://github.com/resurrecting-open-source-projects/nbtscan/issues])
AC_CANONICAL_TARGET
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([src/statusq.c])


CFLAGS="-pedantic -Wextra -Wformat -std=c11"

dnl Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL

dnl Checks for libraries.
AC_CHECK_LIB(xnet, socket)
AC_CHECK_LIB(socket, socket)
AC_CHECK_LIB(resolv, inet_aton)

dnl Checks for header files.
AC_PROG_EGREP

AC_CHECK_HEADERS(sys/time.h)
AC_CHECK_HEADERS(stdint.h)

dnl Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_TYPE(uint8_t, [AC_DEFINE(my_uint8_t, uint8_t)], [AC_CHECK_TYPE(u_int8_t, [AC_DEFINE(my_uint8_t, u_int8_t)])])
AC_CHECK_TYPE(uint16_t, [AC_DEFINE(my_uint16_t, uint16_t)], [AC_CHECK_TYPE(u_int16_t, [AC_DEFINE(my_uint16_t, u_int16_t)])])
AC_CHECK_TYPE(uint32_t, [AC_DEFINE(my_uint32_t, uint32_t)], [AC_CHECK_TYPE(u_int32_t, [AC_DEFINE(my_uint32_t, u_int32_t)])])

AC_C_CONST

dnl Checks for library functions.
AC_CHECK_FUNCS(snprintf inet_aton socket)

if test "$target_os" = cygwin; then
AC_DEFINE(WINDOWS)
BINDIR=c:
TARGET=nbtscan.exe
else
AC_DEFINE(UNIX)
BINDIR=$prefix/bin
TARGET=nbtscan
fi

AC_SUBST(TARGET)
AC_SUBST(BINDIR)

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
