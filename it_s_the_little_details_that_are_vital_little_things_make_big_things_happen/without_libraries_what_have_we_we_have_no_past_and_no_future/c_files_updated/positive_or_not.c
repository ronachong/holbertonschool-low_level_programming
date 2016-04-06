int print_char(char c);

/* positive_or_not():
 * uses if statements;
 * prints P, Z, or N depending on
   which conditionals are met.
 */

void positive_or_not(int n) {
  if (n > 0) {
    print_char('P');
  }
  if (n == 0) {
    print_char('Z');
  }
  if (n < 0) {
    print_char('N');
  }
}
