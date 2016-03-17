#include <stdio.h>

int strings_compare(char *s1, const char *s2) {
  int i;

  /* what am I trying to do?
     find first char which is different
     return value based on that char
     - 0 if char is the same
     - else: difference bw chars */

  /* loop thru and find first instance of difference;
   * if no difference exists, then end of s1 */
  for (i = 0; s1[i]==s2[i] && s1[i] != '\0'; i++) { 
  }

  /* if s1[i] & s2[i] are the same, then whole string is same */
  if (s1[i] == s2[i]) {
    return 0;
  }
  
  /* else */
  return (s1[i] - s2[i]);
}
