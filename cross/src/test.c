#include "header.h"
#include <stdio.h>

int main(void) {
  int str_len;
  int integer;

  str_len = find_length("test string");
  printf("the length is %d\n", str_len);

  integer = dec_to_int(4, 3);
  printf("dec_to_int converted 4 to %d\n", integer);

  integer = str_to_int("4251");
  printf("str_to_int converted the str 4251 to the int %d\n", integer);

  print_string("test string");
  print_char('\n');

  return 0;
}
