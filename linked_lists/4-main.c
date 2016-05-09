#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int add_node(List **list, char *str);
void free_list(List *list);
int list_size(List *list);


int main(void)
{
  List *list;

  list = NULL;
  if (add_node(&list, "Holberton") == 1)
    return (1);
  if (add_node(&list, "School") == 1)
    return (1);
  printf("The size of the list is %i\n", list_size(list));
  free_list(list);
  printf("The size of the list is %i\n", list_size(list));
  printf("The next pointer of the head is %p\n", (void *)list->next);
  printf("The string of the head is %s\n", list->str);
  return (0);
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
