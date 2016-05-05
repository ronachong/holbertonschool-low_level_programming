int find_length(char *);

/* string_to_struct 
   allocates the memory for the objects in struct String;
   assigns values to the string and int initialized in String;
   and returns a pointer to String (or the objects in String?) */

struct String *string_to_struct(char *str) {
  int str_length;
  struct String string_struct;
  struct String ptr_to_string_struct;

  /* find the length of str */
  str_length = find_length(str);

  /* allocate appropriate memory for String based on sizeof str and int */
  ptr_to_string_struct = malloc(sizeof([stuffinsidestruct?]));

  /* assign values for string and int initialized in String */
  ptr_to_string_struct -> str /*how does it know I mean the str inside the struct?*/ = str;

  ptr_to_string_struct -> length = str_length;

  /* return pointer to String */
  return ptr_to_string_struct
}
