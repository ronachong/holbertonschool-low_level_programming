#include <stdio.h>

int string_to_integer(char *s) {
  int length;
  float power = 0.1;
  int index;
  int n = 0;
  int status = 0;
  int sign = 1;

  /* figure out the length of the array; also power of number */
  for (length = 0; s[length] != '\0'; length++) {
    if (s[length] >= '0' && s[length] <= '9') {
      if (status == 0) {
	  power *= 10;
	}
      if (s[length + 1] < '0' || s[length + 1] > '9') {
	  status = 1;
	}
      printf("power is now %f\n", power);
    }
  }

  /* for ea. number in string, multiply by power 
   * and add to n */
  for (index = 0; index != length; index++) {

    /* calculate if number needs to be neg. at end */
    if (s[index - 1] == '-') {
      sign *= -1;
    }

    if (s[index] >= '0' && s[index] <= '9') {
      printf("s[index] is %c, printing\n", s[index]);
      printf("power is %f\n", power);
      n += (s[index] - 48) * power;
      if (s[index + 1] < '0' || s[index + 1] > '9') {
	printf("s[index + 1] is not a number, stopping and returning n.\n");
	n *= sign;
	return n;
      }
      /* else: reduce power and loop again */
      printf("s[index + 1] is %c, continuing loop\n", s[index + 1]);
      power /= 10;
    }
  }
  return 0;
} 
