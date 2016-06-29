#include <stdlib.h>
#include "list.h"

/*
 * free_dcl_list frees a doublelinked circular list containing a prev, next,
 * and str element in each node.
 */

void free_dcl_list(List *list) {
  List *node_ptr;
  List *tmp;
  
  /* start at first node in list */
  node_ptr = list;

  /* free string in each node, then free each node */
  while (node_ptr != NULL) {
    free(node_ptr->str);
    tmp = node_ptr->next;
    free(node_ptr);

    if (tmp == list)
      return;
    
    /* else */
    node_ptr = tmp;
  }
}
