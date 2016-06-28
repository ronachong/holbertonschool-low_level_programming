#include "list.h"
#include <string.h>

void print_string(char *str);
int add_end_dl_list(List **list, char *str);

/*
 * array_to_dl_list takes in the string array, array, as its parameter.
 * array_to_dl_list returns a double-linked list with nodes containing
 * each string in array.
 */

List *array_to_dl_list(char **array) {
  int i;
  List *head_ptr;
  int node;

  /* start with an empty list */
  head_ptr = NULL;
  
  for (i = 0; array[i] != NULL; i++) {
    node = add_end_dl_list(&head_ptr, array[i]);
    /* return NULL if add failed */
    if (node == 1)
      return NULL;
  }
  return head_ptr;
}
