void reverse_string(char *s) {
  int n; /* counter for chars in s */
  int index, max_index; /* counter for chars in s_reverse */
  char c_a, c_b;

  for (n = 0; s[n] != '\0'; n++) {};

  /* n now represents the length of string */
  max_index = n - 1;

  if (n % 2 != 0) {
    /* loop through n/2 and swap characters using temp char vars */
    for (index = 0; index <= n/2; index ++) {
      c_a = s[index];
      c_b = s[max_index];
      s[index] = c_b;
      s[max_index] = c_a;
      max_index --;
    }
    return;
  }

  /* else */
  for (index = 0; index <= n/2 - 1; index ++) {
    c_a = s[index];
    c_b = s[max_index];
    s[index] = c_b;
    s[max_index] = c_a;
    max_index --;
  }
}
