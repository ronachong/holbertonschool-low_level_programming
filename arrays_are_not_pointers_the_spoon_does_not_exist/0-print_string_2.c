int print_char(char c);

/* print_string_2 prints one character
 * out of two, starting with the first
 * character. */

void print_string_2(char *str) {
  int i;

  for (i = 0; str[i] != '\0';) {
    print_char(str[i]);
    i += 2;
  }
}
