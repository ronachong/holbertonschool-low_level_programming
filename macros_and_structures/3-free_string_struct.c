#include <stdlib.h>
#include "str_struct.h"

/* free_string_struct uses free to free the memory
   pointed to by the given pointer */

void free_string_struct(struct String *str) {
  free(str->str);
  free(str);
}
