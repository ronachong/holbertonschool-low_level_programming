#include "my_functions.h"

/* print_tebahpla():
 * declares char c;
 * runs through a for loop from z to a;
 * uses print_char() to print the char
   in each loop.
 */

void print_tebahpla(void) {
  char c;
  for (c = 'z'; c >= 'a'; c--) {
    print_char(c);
  }
}
