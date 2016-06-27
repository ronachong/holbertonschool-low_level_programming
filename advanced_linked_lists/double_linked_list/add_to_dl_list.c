#include "list.h"

/*
 * add_end_dl_list takes in a pointer to a pointer, list. The address which list
 * points to should be the first item in a linked list, or NULL. add_end_dl_list
 * appends a new node to the end of the list with the string str as its str
 * element.
 */

int add_end_dl_list(List **list, char *str) {
  List *node_ptr;
  
  /* malloc space for node, including elements housed by node (ptr values) */
  node_ptr = malloc(sizeof(List));
  /* return 1 if malloc fails */
  if (node_ptr == NULL) {
    return 1;
  }

  /* assign values for node, as in: */
  /* set node str to a copy of the string using strdup */
  node_ptr->str = strdup(str);
  if (node_ptr->str == NULL) {
    return 1;
  }
  /* make prev pointer equal to pointer to last node in list */
  node_ptr->prev = get_tail(list);
  /* make next pointer equal to NULL */
  node_ptr->next = NULL;
}
  
