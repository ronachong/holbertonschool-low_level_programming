#include <stdio.h>
int print_char(char c);

void print_string_half(char *str) {
  int length = 0;
  int i;
  int start;

  /* use for loop to get length of str */
  for (i = 0; str[i] != '\0'; i++) {
    length += 1;
  }

  start = length/2 + 1;
  /* make adjustment when length is odd */
  if (length % 2 == 1) {
    start = (length - 1)/2 + 1;
  }

  /* loop thru 2nd half of string and print */
  for (i = start; i != length; i++) {
    print_char(str[i]);
  }
}
