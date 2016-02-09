#include "my_functions.h"

/* print_base16():
 * prints 0-F of base 16 using print_char() */

void print_base16(void) {
  int i; /* declaring int variable i */
  char c; /* declaring char variable */
  char C; /* declaring char variable C */

  c = 48; /* ascii value for 0 */
  C = 'A';

  for (i = 0; i < 16; i++) {
    if (i < 10) {
	print_char(c);
	c++;
    } /* first 10 digits are printed 0-9 */
    if (i >= 10) {
      print_char(C);
      C++;
    } /* last 6 digits are printed A-F */
  }
}
