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

#define ERROR 12345

struct list_item
{
  struct list_item *next;
  struct list_item *prev;
  unsigned long content;
};

struct list
{
  struct list_item *head;
};

struct list *
new_list ();

struct list_item *
new_list_item ( unsigned long content );

void
delete_list ( struct list *list );

int
compare ( struct list_item *item1, struct list_item *item2 );

int
insert ( struct list *lst, unsigned long content );

int
in_list ( struct list *lst, unsigned long content );
