#include "header.h"

void print_combination_2(void)
{
  int n;
  int n2;
  
  for (n = 0; n < 8; n++)
    {
      for (n2 = n+1 ; n2 < 10; n2++)
	{
	  print_number(n);
	  print_number(n2);
	  print_char(',');
	  print_char(' ');
	}
    }
  print_number(89);
}
