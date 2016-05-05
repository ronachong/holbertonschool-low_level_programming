#include "str_struct.h"

int print_char(char);
void print_string(char *);
void print_number(int);

/* print_string_struct accesses the string and int in the struct pointed to by str
   and prints them, using print_string and print_number. */

void print_string_struct(struct String *str) {
  print_string(str->str);
  print_char(',');
  print_char(' ');
  print_number(str->length);
  print_char('\n');
}


/* print_string loops through a given string and prints each char in string, using
   print_char */

void print_string(char *s) {
  int i;

  for (i = 0; s[i] != '\0'; i++) {
    print_char(s[i]);
  }
}

/* print_number takes in an int as an input, finds each first digit and prints its char
   equivalent, till the whole int is printed */

void print_number(int n) {
  int length;

  length = 1;
  while (n > 9) {
    n /= 10;
    length++;
  }

  print_char(n + '0');
  
  if (length > 1) {
    print_number(n*10
}
