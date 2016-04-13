#include <stdio.h>
#include <stdlib.h>

char *string_dup(char *str) {
  char *mem;
  int i;

  /* find out size of str, allocate memory of same size and assign pointer to
   * memory to var mem*/
  mem = malloc(sizeof str);
  
  /* if malloc fails, return NULL */
  if (mem == NULL) {
    return NULL;
  }

  /* else, place chars in allocated memory */
  for (i = 0; str[i] != '\0'; i++) {
    mem[i] = str[i];
  }

  /* now return pointer to allocated memory */
  return mem;
}
