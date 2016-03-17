int print_char(char c);

void print_line(int n) {
  for (; n > 0; n--) {
    print_char('_');
  }
  print_char('\n');
}
