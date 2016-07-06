#include "header.h"
#include <stdio.h>
/*
 * print_sec_half prints the second half of a cross
 * based on the number of rows passed for the cross.
 */

void print_sec_half(int n_rows, int spc_btw)
{
  int i;
  int l;
  int spc_out;

  spc_out = (n_rows - spc_btw - 2)/2;
  n_rows = n_rows/2;

  /* for each row */
  for (i = 0; i < n_rows; i++) {
    for (l = 0; l < spc_out; l++) {
      print_char(' ');
    }
    print_char('/');
    for (l = 0; l < spc_btw; l++) {
      print_char(' ');
    }
    print_char('\\');
    for (l = 0; l < spc_out; l++) {
      print_char(' ');
    }
    print_char('\n');
    spc_out--;
    spc_btw += 2;
  }
}
