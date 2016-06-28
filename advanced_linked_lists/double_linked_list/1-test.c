#include <stdlib.h>
#include "list.h"
#include <stdio.h>

List *array_to_dl_list(char **);

int main(__attribute__((unused))int ac, char **av)
{
  List *list;
  printf("%s\n", av[0]);
  printf("%s\n", av[1]);
  printf("%s\n", av[2]);
  printf("%s\n", av[3]);
  printf("This should be NULL: %s\n", av[4]);

  list = array_to_dl_list(av);
  if (list == NULL)
    return (1);
  printf("The address stored in list is now %p.\n", (void *)list);

  printf("The nodes in the list contain the strings:\n");
  printf("%s\n", list->next->next->prev->prev->str);
  printf("%s\n", list->next->next->prev->str);
  printf("%s\n", list->next->next->str);
  printf("%s\n", list->next->next->next->str);
  return (0);
}
