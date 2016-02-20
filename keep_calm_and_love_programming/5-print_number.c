#include "header.h"

/* print_number(int) takes an integer
 * in parameter and prints it. */

void print_number(int n) {
  int og_input = n; /* store original val. of input */
  int power = 1;
  int digits = 1;

  /* handle negative cases */
  if (n < 0) {
    print_char('-');
    n *= -1;
    og_input *= -1;
  }

  /* measure power and number of digits of input */
  while (n > 9) {
    n = n/10;
    power *= 10;
    digits += 1;
  }

  /* restore n to original value */
  n = og_input;

  /* reduce n to each digit and print */
  for (; digits > 0; digits--) {
    n = n/power;
    print_char(n + '0');

    n = og_input % power; /* after printing each digit, reduce n to the digits remaining */
    power = power/10;
  }

    /*[[[[let's take care of extreme cases!!]]]]*/
}
