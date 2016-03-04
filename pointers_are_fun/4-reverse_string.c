int print_char(char c);

void reverse_string(char *s) {
  int n;
  for (n = 0; s[n] != '\0'; n++) {};

  /* n now represents the length of string */
  /* use n to print from end of char till first char in string */
  for (; n > -1; n--) {
    print_char(s[n]);
  }
}
