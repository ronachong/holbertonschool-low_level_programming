#include "header.h"

/*
 * print_string writes a given string to std. output.
 */

void print_string(char *s) {
  write(1, s, string_length(s));
}
