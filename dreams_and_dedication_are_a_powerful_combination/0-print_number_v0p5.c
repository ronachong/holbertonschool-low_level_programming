#include "header.h"

void print_number(int input)
{
  int power;
  int n_remaining;
  int number;
  int char_2_print;

  power = 1;
  n_remaining = 0;
  number = input;
  char_2_print = 0;

  
  if (input >= 10)
    {
      while (number > 9)
	{
	  power *= 10;
	  number /= 10;
	}
      n_remaining = input - number*power;
    }

  if (number >= 0 && number < 10)
    {
      print_char(number + 48);
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

