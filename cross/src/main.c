#include "header.h"

int main(int ac, char **av)
{
  int n_rows;

  if (ac != 2) {
    print_string("Please pass one non-negative integer to the program.\n");
    return (1)
    }

  n_rows = str_to_int(av[1]);
  /* print first half of cross */
  if (n_rows % 2 == 1) {
    print_char('X');
  /* print second half of cross*/
  return (0);
}