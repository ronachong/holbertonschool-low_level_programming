#include "header.h"
#include <stdio.h>
/*
 * print_first_half prints the first half of a cross
 * based on the number of rows passed for the cross.
 * print_first_half also returns the spaces to print
 * outside of the cross for the next line, given an
 * odd number of rows for the cross.
 */

int print_first_half(int n_rows)
{
  int i;
  int l;
  int spc_btw;
  int spc_out;

  spc_btw = n_rows - 2;
  spc_out = 0;
  n_rows = n_rows/2;

  /* for each row */
  for (i = 0; i < n_rows; i++) {
    printf("spc_out: %d;", spc_out*2);
    printf("spc_btw: %d ", spc_btw);
    for (l = 0; l < spc_out; l++) {
      print_char(' ');
    }
    print_char('\\');
    for (l = 0; l < spc_btw; l++) {
      print_char(' ');
    }
    print_char('/');
    for (l = 0; l < spc_out; l++) {
      print_char(' ');
    }
    print_char('\n');
    spc_out++;
    spc_btw -= 2;
  }
  return spc_out;
}
