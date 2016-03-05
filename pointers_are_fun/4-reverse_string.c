#include <stdio.h>

void reverse_string(char *s) {
  int n; /* counter for chars in s */
  int i = 0; /* counter for chars in s_reverse */
  for (n = 0; s[n] != '\0'; n++) {};

  /* n now represents the length of string */
  int max_index = n - 1;

  /* create a new string of equal length */
  char s_reverse[n];
  
  /* loop backwards thru s and assign values to s_reverse  */
  for (int index = 0; index <= max_index; index++) {
    s_reverse[index] = s[n-1];
    n--;
  }

  /* reset n to its original value */
  n = max_index + 1;
  
  /* now loop thru s_reverse and set each char in s to the char in s_reverse */
  for (int index = 0; index <= max_index; index++) {
    s[index] = s_reverse[index];
  }
}
