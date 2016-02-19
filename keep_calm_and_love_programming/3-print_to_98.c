#include <stdio.h>

void print_to_98(int n) {
  if (n < 98) {
    for (; n < 98; n++) {
      printf("%i, ", n);
    }
  }

  if (n > 98) {
    for (; n > 98; n--) {
      printf("%i, ", n);
    }
  }

  if (n == 98) {
    printf("%i", n);
  }

  printf("\n");
}
