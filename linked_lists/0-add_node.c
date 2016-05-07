#include <stdlib.h>

char *copy_string(char *);
int find_length(char *);

/* add_node takes in two inputs, 1) a pointer to the address of the first node in a list, /list/;
   and 2) a string, /content/, to insert into a new node in the list.

   add_node allocates space for a new node in the list, makes the string inside a copy of
   /content/ and makes the pointer inside a pointer to the previous first node in the list.

   Finally, add_node changes the value of /list/ to the address of the newly-created node, effect-
   ively making the new node the first node of the list.
*/

int add_node(List **list, char *content) {
  struct List *ptr_to_node;
  
  ptr_to_node = malloc(sizeof(struct List));
  if (ptr_to_node == NULL) {
    return 1;
  }

  ptr_to_node->str = copy_string(content);
  ptr_to_node->next = *list;
  
  *list = ptr_to_node;
  return 0;
}

/* copy_string finds the length of a given string,
   allocates space for a copy of the string,
   loops through the string to copy its char values into the allocated space,
   and returns the string.
*/
char *copy_string(char *s) {
  ;
}

/* find_length loops through a given string, incrementing up for every char,
   and returns the length of the string.
*/
int find_length(char *s) {
  ;
}
