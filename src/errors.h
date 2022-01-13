/*
# Copyright 1999-2003 Alla Bezroutchko <alla@inetcat.org>
# Copyright 2021      Mayco Souza Berghetti <mayco.s.berghetti@gmail.com>
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
*/

#if !defined ERRORS_H
#define ERRORS_H

#define err_die( error, quiet ) \
  if ( !quiet )                 \
    {                           \
      perror ( error );         \
      exit ( 1 );               \
    };

#define err_print( error, quiet ) \
  if ( !quiet )                   \
    perror ( error );

#endif /* ERRORS_H */
