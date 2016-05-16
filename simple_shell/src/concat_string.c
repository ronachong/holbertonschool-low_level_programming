#include "header.h"

/*
 * concat_string concatenates two strings.
 */

char *concat_string(char *s1, char*s2)
{
  int s1_len;
  int s2_len;
  int i;
  int j;
  char *str;

  s1_len = string_length(s1);
  s2_len = string_length(s2);
  str = malloc((s1_len + s2_len + 1)*sizeof(char));
  if (str == NULL) {
    return NULL;
  }

  for (i = 0; s1[i] != '\0'; i++) {
    str[i] = s1[i];
  }

  for (j = 0; j <= s2_len; j++, i++) {
    str[i] = s2[j];
  }

  return str;
}
