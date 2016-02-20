#include <stdio.h>

/* print_to_98(int) takes an integer as an
 * argument and prints all numbers from its
 * value to 98. */

void print_to_98(int n) {
  /* handles cases where input is
   * less than 98; increments and prints
   * n till 98. */
  if (n < 98) {
    for (; n < 98; n++) {
      printf("%i, ", n);
    }
  }

  /* handles cases where input is
   * higher than 98; decrements and prints
   * n till 98 */
  if (n > 98) {
    for (; n > 98; n--) {
      printf("%i, ", n);
    }
  }

  /* handles n when n is 98 */
  if (n == 98) {
    printf("%i", n);
  }

  printf("\n");
}
