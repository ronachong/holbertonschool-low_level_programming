#include <stdlib.h>
#include "str_struct.h"

int print_char(char);
int find_length(char *);
char *copy_string(char *s, int length);

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
  if (ptr == NULL) {
    return NULL;
  }

  /* assign values for string and int initialized in String */
  ptr -> str /*how does it know I mean the str inside the struct?*/ = copy_string(str, str_length);

  ptr -> length = str_length;

  /* return pointer to String */
  return ptr;
}


/* find_length loops through a given string and increments up
   for ever char in the string; returns length */
int find_length(char *s) {
  int i;

  for (i = 0; s[i] != '\0'; i++) {
  }

  return i;
}


/* copy_string
   allocates memory for a copy of the string;
   and loops through the string to copy chars
   to new string */
char *copy_string(char *s, int length) {
  char *copy;
  int i;
  
  copy = malloc(sizeof(char)*length);
  if (copy == NULL) {
    return NULL;
  }

  for (i = 0; i <= length; i++) {
    copy[i] = s[i];
  }
  return copy;
}
