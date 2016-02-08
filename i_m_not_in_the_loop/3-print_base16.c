#include "my_functions.h"

void print_base16(void) {
  int i;
  char c;
  char C;

  c = 48;
  C = 'A';

  for (i = 0; i < 16; i++) {
    if (i < 10) {
	print_char(c);
	c++;
    }
    if (i >= 10) {
      print_char(C);
      C++;
    }
  }
}
