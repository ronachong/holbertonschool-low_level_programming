#include "header.h"

int main(int ac, char **av)
{
  int i;
  int n_rows;
  int spc_btw;
  int spc_out;

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
  spc_out = print_first_half(n_rows);

  /* handle cases of odd n_rows */
  if (n_rows % 2 == 1) {
    for (i = 0; i < spc_out; i++) {
      print_char(' ');
    }
    print_char('X');
    spc_btw = 1;
    for (i = 0; i < spc_out; i++) {
      print_char(' ');
    }
    print_char('\n');
  }

  /* print second half of cross*/
  print_sec_half(n_rows, spc_btw);

  return (0);
}
