#include <stdio.h>

void print_array_of_strings(char **a) {
  int i;
  int length_of_array;

  for (i = 0; a[i] != NULL; i++) {}
  length_of_array = i;

  for (i = 0; i < length_of_array; i++) {
    printf("%s ", a[i]);
  }
  printf("\n");
}
