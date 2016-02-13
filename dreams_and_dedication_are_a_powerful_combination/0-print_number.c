#include "header.h"

void print_number(int input)
{
  int power;
  int n_remaining;
  int number;
  int char_2_print;

  number = input;
  power = 1;
  n_remaining = 0;
  char_2_print = 0;

  /* handle negative cases */
  if (input < 0)
    {
      print_char('-');
      input *= -1;
      number *= -1;
    }

  /* reduce number to first digit 
   * and find remainder */
  while (number > 9)
    {
      power *= 10;
      number /= 10;
    }
  n_remaining = input - number*power;

  /* print number if it's only one digit; 
   * not sure if the condition is necessary,
   * actually. */
  if (number >= 0 && number < 10)
    {
      print_char(number + 48);
    }

  /* test if next digit is a 0; special case */
  if (n_remaining * 10 < power && power > 1)
    {
      print_char('0');
    }

  /* recursive call with remainder of number */
  if (n_remaining > 0)
    {
      print_number(n_remaining);
    }
}
