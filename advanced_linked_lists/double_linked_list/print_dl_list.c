#include <string.h>
#include "list.h"
void print_string(char *str);
int print_char (char c);

/*
 * print_dl_list takes in as its parameter the pointer to the head of a
 * list, list.
 * print_dl_list prints the contents of each node in the list.
 */

void print_dl_list(List *list) {
  List *node_ptr;

  /* start at beginning of list */
  node_ptr = list;

  /* if list is empty, don't print anything */
  if (node_ptr == NULL)
    return;

  /* else */
  while (node_ptr != NULL) {
    print_string(node_ptr->str);
    print_char('\n');

    print_char('\t');
    print_string( (node_ptr->prev == NULL) ? "NULL": node_ptr->prev->str);
    print_char('\n');

    print_char('\t');
    print_string( (node_ptr->next == NULL) ? "NULL": node_ptr->next->str);
    print_char('\n');

    node_ptr = node_ptr->next;
  }
}
