#include "header.h"

/* Prints Fizz for multiples of 3, Buzz for multiples of 5,
 * FizzBuzz for multiples of 3 and 5, and the number for all
 * other integers from 1 to 100. */

void print_fizzbuzz(void) {
  int n;
  for (n = 1; n < 101; n++) {
      if (n % 3 == 0) {
	  printf("Fizz");
	}
      if (n % 5 == 0) {
	  printf("Buzz");
	}
      if (n % 3 != 0 && n % 5 != 0) {
	  printf("%i", n);
	}
      if (n < 100) {
	  printf(" ");
        }
    }
}
