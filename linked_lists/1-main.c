#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List *params_to_list(int ac, char **av);
void print_every_string_in_list(struct List *ptr_to_head_of_list);

int main(int ac, char **av)
{
  List *params_list;

  params_list = params_to_list(ac, av);
  if (params_list == NULL)
    return (1);
  print_every_string_in_list(params_list);
  return (0);
}


/* print_every_string_in_list loops thru the list pointed to by
   ptr_to_head_of_list and prints the string in each node */
void print_every_string_in_list(struct List *ptr_to_head_of_list) {
  struct List *ptr_to_node;

  /* initialize ptr to node as ptr to the head of the list */
  ptr_to_node = ptr_to_head_of_list;

  while (ptr_to_node->next != NULL) {
    printf("%s\n", ptr_to_node-> str);
    ptr_to_node = ptr_to_node->next;
  }

  printf("%s\n", ptr_to_node-> str);

  return ptr_to_node;
}
