int print_char(char c);

/* print_last_digit(int) prints the
 * last digit of an integer input. */

void print_last_digit(int n) {
  int original_input = n;
  int power = 1;
  int reduced_value = 999;

  /* handle negative cases */
  if (n < 0) {
    n *= -1;
    original_input *= -1;
  }

  /* take each digit off input until
   * last digit is left */
  while (reduced_value > 9) {
      while (n > 9) {
	n = n/10;
	power *= 10;
      }

      reduced_value = original_input - n*power;
    }

  /* print reduced value once it has been
   * reduced to last digit */
  print_char(reduced_value + '0');

    /*[[[try to handle extreme cases??]]] */
}
