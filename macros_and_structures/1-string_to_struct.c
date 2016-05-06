#include <stdlib.h>
int find_length(char *);

/* string_to_struct 
   allocates the memory for the objects in struct String;
   assigns values to the string and int initialized in String;
   and returns a pointer to String (or the objects in String?) */

struct String *string_to_struct(char *str) {
  int str_length;
  struct String *ptr;

  /* find the length of str */
  str_length = find_length(str);

  /* allocate appropriate memory for String based on sizeof str and int */
  ptr = malloc(sizeof(struct String));

  /* assign values for string and int initialized in String */
  ptr -> str /*how does it know I mean the str inside the struct?*/ = str;

  ptr -> length = str_length;

  /* return pointer to String */
  return ptr;
}
