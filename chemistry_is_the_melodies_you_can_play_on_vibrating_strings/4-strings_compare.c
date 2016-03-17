int strings_compare(char *s1, const char *s2) {
  int i;

  /* loop thru and find first instance of difference */
  for (i = 0; s1[i] == s2[i]; i++){};

  /* if char in s1 < s2, return negative int */
  if (s1[i] < s2[i]) {
    i*= -1;
  }
  return i;  /* if char in s1 > s2, return positive int; if =, return 0 */
  ;
}
