#include "header.h"

/*
 * print_string iterates through the string passed
 * to it and prints each char in the string, using
 * print_char.
 */

void print_string(char *str)
{
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    print_char(str[i]);
  }
}
