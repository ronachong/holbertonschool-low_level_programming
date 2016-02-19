#include "header.h"

void print_number(int n) {
  int og_input = n;
  int power = 1;
  int digits = 1;
  
  if (n < 0) {
    print_char('-');
    n *= -1;
    og_input *= -1;
  }

  /* get power */
  while (n > 9) {
    n = n/10;
    power *= 10;
    digits += 1;
  }

  n = og_input;
  
  for (; digits > 0; digits--) {
    n = n/power;
    print_char(n + '0');

    n = og_input % power;
    power = power/10;
  }

    /*[[[[let's take care of extreme cases!!]]]]*/
}
