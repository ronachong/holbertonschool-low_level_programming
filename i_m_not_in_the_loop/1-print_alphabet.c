#include "my_functions.h"

/* print_alphabet():
 * declares char c
 * iterates from a to z in for loop
 * prints the character of ea. loop
 */

void print_alphabet(void) {
  char c;
  
  for (c = 'a'; c <= 'z'; c++) {
    print_char(c);
  }
}
