#include "header.h"

/* prints single digit combos,
i.e. 0-9 */

void print_combination_1(void)
{
  int n;
  for (n = 0; n < 9; n++)
    {
      print_number(n);
      print_char(',');
      print_char(' ');
    }
  print_number(9);
}
