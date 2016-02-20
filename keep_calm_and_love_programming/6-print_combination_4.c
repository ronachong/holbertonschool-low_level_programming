#include "header.h"

/* print_combination_4() prints all possible
 * combinations of 2 2-digit numbers on one line. */

void print_combination_4(void) {
  int n;
  int n2;

  /* run through & print the 2nd number for each digit b/w 0 and 99,
   * excluding combinations already printed (using n2 = n+1). */
  for (n = 0; n <  99; n++) {
    for (n2 = n + 1; n2  < 100; n2++) {

      if (n < 10) {
	print_number(0); /* handle cases where n under 10 by manually printing 0 */
      }

      print_number(n);
      print_char(' ');

      if (n2 < 10) {
	print_number(0); /* handle cases where n2 under 10 by manually printing 0 */
      }

      print_number(n2);
      
      if (n + n2 != 197) {
	print_char(',');
	print_char(' ');
      }
    }
  }
}
