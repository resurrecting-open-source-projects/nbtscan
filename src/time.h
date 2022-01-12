/*
# Copyright 1999-2003 Alla Bezroutchko <alla@inetcat.org>
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

#ifndef timerclear
#define timerclear( tvp ) ( tvp )->tv_sec = ( tvp )->tv_usec = 0
#endif

#ifndef timercmp
#define timercmp( tvp, uvp, cmp )                       \
  ( ( ( tvp )->tv_sec == ( uvp )->tv_sec )              \
            ? ( ( tvp )->tv_usec cmp ( uvp )->tv_usec ) \
            : ( ( tvp )->tv_sec cmp ( uvp )->tv_sec ) )
#endif

#ifndef timersub
#define timersub( tvp, uvp, vvp )                             \
  do                                                          \
    {                                                         \
      ( vvp )->tv_sec = ( tvp )->tv_sec - ( uvp )->tv_sec;    \
      ( vvp )->tv_usec = ( tvp )->tv_usec - ( uvp )->tv_usec; \
      if ( ( vvp )->tv_usec < 0 )                             \
        {                                                     \
          ( vvp )->tv_sec--;                                  \
          ( vvp )->tv_usec += 1000000;                        \
        }                                                     \
    }                                                         \
  while ( 0 )
#endif
