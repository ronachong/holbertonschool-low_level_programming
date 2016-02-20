int print_char(char c);

/* print_last_digit(int) prints the
 * last digit of an integer input. */

void print_last_digit(int n) {
  if (n == -2147483647 - 1) {
    print_char(8 + '0');
  }

  else if (n < 0) {
    n *= -1;
  }

  else {
    n = n % 10;
    print_char(n + '0');
  }
}
