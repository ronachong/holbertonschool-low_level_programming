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
  return (0);
}
