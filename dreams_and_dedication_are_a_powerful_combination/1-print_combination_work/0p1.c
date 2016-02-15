#include "header.h"

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
