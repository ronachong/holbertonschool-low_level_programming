#include "header.h"

void print_combination_3(void)
{
  int n;
  int n2;
  int n3;
  
  for (n = 0; n < 7; n++)
    {
      for (n2 = n+1 ; n2 < 10; n2++)
	{
	  for (n3 = n2 + 1; n3 < 10; n3++)
	    {
	      print_number(n);
	      print_number(n2);
	      print_number(n3);
	      print_char(',');
	      print_char(' ');
	    }
	}
    }
  print_number(789);
}
