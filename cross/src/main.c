#include "header.h"

int main(int ac, char **av)
{
  int n_rows;
  int spc_btw;

  /* handle improper number of args */
  if (ac != 2) {
    print_string("Please pass one non-negative integer to the program.\n");
    return (1);
    }

  n_rows = str_to_int(av[1]);
  spc_btw = 0;

  /* handle improper values passed as argument */
  if (n_rows == -1) {
      print_string("Invalid argument. Please pass a non-negative integer to \
the program.\n");
      return (1);
    }

  /* print first half of cross */
  print_first_half(n_rows);

  /* handle cases of odd n_rows */
  if (n_rows % 2 == 1) {
    print_char('X');
    print_char('\n');
    spc_btw = 1;
  }

  /* print second half of cross*/
  print_sec_half(n_rows, spc_btw);

  return (0);
}
