#include "list.h"
#include <stdlib.h>
#include <string.h>

void print_string(char *str);
List *get_tail(List **list);

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

  /* if list is empty, make node's prev. element NULL, and reassign list
   * to point to node_ptr */
  if (*list == NULL) {
    node_ptr->prev = NULL;
    *list = node_ptr;
  }
  else {  
  /* make prev pointer equal to pointer to last node in list */
    node_ptr->prev = get_tail(list);
  /* make previous node point to this node*/
    node_ptr->prev->next = node_ptr;
  }
  /* make next pointer equal to NULL */
  node_ptr->next = NULL;
  return 0;
}

List *get_tail(List **list) {
  List *node_ptr;
  node_ptr = *list;
  
    while (node_ptr->next != NULL) {
      node_ptr = node_ptr->next;
    }

    return node_ptr;
}

/*
 * add_begin_dl_list takes in a pointer to the address of the first item in a
 * list, list, and a string, str.
 * add_begin_dl_list adds a new node to the list pointed to by list via the
 * following steps:
 * -allocate the space for new node in the list
 * -assign a malloced copy of str to the node's str element
 * -assign the pointer to the first node to the node's next element
 * -assign NULL to the node's prev element
 * -change the value of the next node (i.e. the former first node)'s prev elem-
 * ent to the pointer of the node.
 */



