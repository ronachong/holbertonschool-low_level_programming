#include <stdlib.h>
#include "list.h"

char *copy_string(char *);
int find_length(char *);
int find_end_of_list(struct List *);

/* add_node takes in two inputs, 1) a pointer to the address of the first node in a list, /list/;
   and 2) a string, /content/, to insert into a new node in the list.

   add_node allocates space for a new node in the list, makes the string inside the node a copy of
   /content/ and makes the /next/ pointer inside the node a pointer to NULL (tail of list).

   Finally, add_node changes the /next/ pointer of the current tail node of the list to point to
   the new node, effectively making making the new node the new last node of the list.
*/

int add_node(List **list, char *content) {
  struct List *ptr_to_node;
  
  ptr_to_node = malloc(sizeof(struct List));
  if (ptr_to_node == NULL) {
    return 1;
  }

  ptr_to_node->str = copy_string(content);
  ptr_to_node->next = NULL;
  
  return 0;
}

/* copy_string finds the length of a given string,
   allocates space for a copy of the string,
   loops through the string to copy its char values into the allocated space,
   and returns the string.
*/
char *copy_string(char *s) {
  int i;
  int length;
  char *copy;

  length = find_length(s);
  copy = malloc(sizeof(char)*length);
  
  for (i = 0; i < length; i++) {
    copy[i] = s[i];
  }
  return copy;
}

/* find_length loops through a given string, incrementing up for every char,
   and returns the length of the string.
*/
int find_length(char *s) {
  int i;
  
  for (i = 0; s[i] != '\0'; i++) {}
  return i;
}


/* find_end_of_list takes the head of a list, /head/,
   and proceeds to check the /next/ pointer in each node in the list,
   until it reaches a NULL pointer, incrementing each time.

   It returns the index value for the current last node in the list.
*/
int find_end_of_list(struct List *list) {
  ;
}
