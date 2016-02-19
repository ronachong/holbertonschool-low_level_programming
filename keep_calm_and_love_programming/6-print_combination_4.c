#include "header.h"

void print_combination_4(void) {
  int n;
  int n2;

  for (n = 0; n <  99; n++) {
    for (n2 = n + 1; n2  < 100; n2++) {

      if (n < 10) {
	print_number(0);
      }

      print_number(n);
      print_char(' ');

      if (n2 < 10) {
	print_number(0);
      }

      print_number(n2);

      if (n + n2 != 197) {
	print_char(',');
	print_char(' ');
      }
    }
  }
}
