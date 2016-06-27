#include "list.h"

/*
 * add_end_dl_list takes in a pointer to a pointer, list. The address which list
 * points to should be the first item in a linked list, or NULL. add_end_dl_list
 * appends a new node to the end of the list with the string str as its str
 * element.
 */

int add_end_dl_list(List **list, char *str) {
  List *node_ptr;
  char *node_str;
  List *next_ptr;
  List *prev_ptr;
  
  /* steps : */
  /* create space for node, as in: */
  /* malloc space for the node,
     including the elements housed by node (ptr values) */
  node_ptr = malloc(sizeof(List));
  /* return 1 if malloc fails */
  if (node_ptr == NULL) {
    return 1;
  }
  /* malloc space for chars in string pointed to by str in node.
     not sure if strdup already does this */
  node_str = malloc(sizeof(char)*str_length);
  /* return 1 if malloc fails */
  if (node_str == NULL) {
    return 1;
  }
 
  /* assign values for node, as in */
  /* use strdup to copy str, and make node str equal to copy */
  
  /* make prev pointer equal to pointer to last item in list */
  /* make next pointer equal to NULL? */
}
  
