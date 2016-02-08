#include "my_functions.h"

void print_number(int n)
{
  int decimal_num;
  int n_remaining;
  int int_2_decimal;
  int char_2_print;

  decimal_num  = 1;
  n_remaining = 0;
  int_2_decimal = n;
  char_2_print = 0;
  
  if (n >= 10)
    {
      while (decimal_num > 9)
	{
	  decimal_num *= 10;
	  int_2_decimal /= 10;
	}
      n_remaining = n - int_2_decimal*decimal_num;
    }

  if (int_2_decimal >= 0 && int_2_decimal < 10)
    {
      char_2_print = int_2_decimal + 48;
      print_char(char_2_print);
    }

  if (n_remaining > 0)
    {
      print_number(n_remaining);
    }

  else
    {
      print_char('N');
    }
}
