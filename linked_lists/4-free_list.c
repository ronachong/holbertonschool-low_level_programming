#include "list.h"
#include <stdlib.h>

int list_size(List *list);

/* free_list takes in a pointer to the first node
   to a list and frees space alloc'd for each string
   and each next pointer. */
void free_list(List *list) {
  int i;
  int length;
  List *ptr_to_node;
  List **array_of_ptrs;

  length = list_size(list);
  ptr_to_node = list;
  array_of_ptrs = malloc(sizeof(List*)*length);
  if (array_of_ptrs == NULL) {
    return NULL;
  }

  /* free all the strings in list, and save ptr to each node to array */
  for (i = 0; i < length; i++) {
    free(ptr_to_node->str);
    array_of_ptrs[i] = ptr_to_node;
    ptr_to_node = ptr_to_node->next;    
  }

  /* free space allocated to nodes */
  for (i = 0; i < length; i++) {
    free(array_of_ptrs[i]);
  }
  
  /* free space allocated to array */
  free(array_of_ptrs);
}


/* list_size loops thru the list pointed to by list and
   increments up for every node in list, returning the                                             
   size of the list                                                                                         
*/
int list_size(List *list) {
  int i;
  struct List *ptr_to_node;

  /* initialize ptr to node as ptr to the head of the list */
  ptr_to_node = list;

  /* count up each time a node does not point to NULL */
  for (i = 0; ptr_to_node->next != NULL; i++) {
    ptr_to_node = ptr_to_node->next;
  }

  /* count last node */
  i++;

  /* return count */
  return i;
}
