#include "header.h"

/*
 * string_comparison loops through two strings and compares each char;
 * if each char is a match, it returns 1 for true,
 * if there is a single mismatch, it returns 0 for false.
 */

int string_comparison(char *s1, char *s2)
{
  int i;
  int l1;
  int l2;

  l1 = string_length(s1);
  l2 = string_length(s2);

  if (l1 != l2)
    return 0;

  /* else */
  for (i = 0; s1[i] != '\0'; i++) {
    if (s1[i] != s2[i])
      return 0;
  }
  
  return 1;
}
