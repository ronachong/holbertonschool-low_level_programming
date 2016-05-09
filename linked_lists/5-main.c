#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int add_node(List **list, char *str);
void rev_list(List **list);
void print_list(List *list);
int print_char(char);
void print_string(char *);

int main(void)
{
  List *list;

  list = NULL;
  if (add_node(&list, "Holberton") == 1)
    return (1);
  if (add_node(&list, "School") == 1)
    return (1);
  if (add_node(&list, "98 Battery St.") == 1)
    return (1);
  if (add_node(&list, "CA 94111") == 1)
    return (1);
   print_string("\nHaven't run rev_list.\n");
  print_list(list);
  print_string("\nAbout to run rev_list.\n");
  rev_list(&list);
  print_string("\nRan rev_list.\n");
  print_list(list);
  return (0);
}
