#include <stdio.h>

/* print_combination_2() prints all possible
 * combinations of 2 different digits, on one
 * line. */

void print_combination_2(void) {
  int n;
  int n2;

  /* start with 0 and run & print from
   * the next digit up for the 2nd digit.
   * do the same for each 1st digit till 79. */
  for (n = 0; n < 8; n++) {
    for (n2 = n + 1; n2 < 10; n2++) {
      printf("%d%d, ", n, n2);
    }
  }

  /* print last term */
  printf("89");
}
