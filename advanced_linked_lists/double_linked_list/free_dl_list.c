#include <stdlib.h>
#include "list.h"

/*
 * free_dl_list frees a double_linked_list containing a prev, next, and str
 * element in each node.
 */

void free_dl_list(List *list) {
  List *node_ptr;
  List *tmp;
  
  /* start at first node in list */
  node_ptr = list;

  /* free string in each node, then free each node */
  while (node_ptr != NULL) {
    free(node_ptr->str);
    tmp = node_ptr->next;
    free(node_ptr);
    node_ptr = tmp;
  }
}
