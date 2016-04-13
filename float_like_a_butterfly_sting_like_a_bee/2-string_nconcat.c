#include <stdio.h>
#include <stdlib.h>

char *string_concat(char *s1, char *s2) {
  char *mem; /* initialize var to eventually hold concat'd strings */
  int i;
  int j;

  /* add the sizes of s1 & s2, then use malloc
   * to allocate mem of equal size; assign pointer
   * to memory to var the mem */
  mem = malloc(sizeof(s1) + sizeof(s2));

  /* if malloc failed to allocate anything, return NULL */
  if (mem == NULL) {
    return NULL;
  }

  /* loop through s1 and assign chars to allocated memory */
  for (i = 0; s1[i] != '\0'; i++) {
    mem[i] = s1[i];
  }

  /* loop through s2 and assign chars to allocated memory */
  for (j = 0; s2[j] != '\0'; j++, i++) {
    mem[i] = s2[j];
  }

  /* return pointer to allocated memory */
  return mem;
}
