#include "list.h"

int print_char(char);
void print_string(char *s);

/* print_every_string_in_list loops thru the list pointed to by                                             
   ptr_to_head_of_list and prints the string in each node */
void print_list(List *list) {
  struct List *ptr_to_node;

  /* initialize ptr to node as ptr to the head of the list */
  ptr_to_node = list;

  while (ptr_to_node->next != NULL) {
    print_string(ptr_to_node->str);
    ptr_to_node = ptr_to_node->next;
  }

  print_string(ptr_to_node->str);
}

/* print_string loops thru string input and prints every
   char using print_char */
void print_string(char *s) {
  int i;
  
  for (i = 0; s[i] != '\0'; i++) {
    print_char(s[i]);
  }
}
