#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int add_node(List **, char *);
char *copy_string(char *);
int find_length(char *);
struct List *find_end_of_list(struct List **);

/* params_to_list takes in an array of string arguments /av/,
   creates a list with a node for each string arg,
   and returns the pointer to the first node of the list.

   A more detailed breakdown:
   params_to_list
   1) creates a pointer for the head of the list & makes this equal to NULL (temporarily);
   2) then, calls add_node (which:
      - uses malloc to allocate space for a new node and create a pointer to the memory;
      - uses malloc to allocate space for a copy of the string arg;
      - uses copy_string to copy the char values of the string arg to the memory for the copy;
      - uses the pointer to the new node to assign the copy string to the node;
      - makes the next pointer of the previous node (i.e. the current tail of the list) point
        to the new node, using find_end_of_list
	UNLESS the new node happens to be the only node for the list so far, in which case,
	params_to_list changes the header pointer to point to the new node.)
      for every string element in /av/
   3) finally, params_to_list returns the head pointer.
*/

List *params_to_list(int ac, char **av) {
  int i;
  struct List *ptr_to_head;

  *ptr_to_head = NULL;

  for (i = 1; i <= ac; i++) {
    add_node(&ptr_to_head, av[i]);
  }

  return ptr_to_head;
}
