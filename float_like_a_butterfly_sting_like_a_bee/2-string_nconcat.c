#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, int n) {
  char *mem; /* initialize var to eventually hold concat'd strings */
  int i;
  int j;

  /* add the sizes of s1 & n, then use malloc
   * to allocate mem of equal size; assign pointer
   * to memory to var the mem */
  mem = malloc(sizeof(s1) + sizeof(n));

  /* if malloc failed to allocate anything, return NULL */
  if (mem == NULL) {
    return NULL;
  }

  /* loop through all of s1 & assign chars to allocated memory */
  for (i = 0; s1[i] != '\0'; i++) {
    mem[i] = s1[i];
  }

  /* loop through s2 up to s2[n] & assign chars to allocated memory */
  for (j = 0; s2[j] != s2[n]; j++, i++) {
    mem[i] = s2[j];
  }

  /* return pointer to allocated memory */
  return mem;
}
