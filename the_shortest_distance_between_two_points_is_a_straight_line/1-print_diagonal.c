int print_char(char c);

void print_diagonal(int n) {
  int i;
  int l;

  if (n < 1) {
    print_char('\n');
  }

  /* print the appropriate no. of lines */
  for (i = 0; i < n; i++) {
    if (n > 1) {
      /* print the appropriate no. of spaces for ea. line */
      for (l = i; l > 0; l--) {
	print_char(' ');
      }
      print_char('\\');
    }
    print_char('\n');
  }
}
