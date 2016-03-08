#include <stdio.h>

int string_to_integer(char *s) {
  int length;
  float power = 0.1;
  int index;
  int n = 0;

  /* figure out the length of the array; also power of number */
  for (length = 0; s[length] != '\0'; length++) {
    if (s[length] >= '0' && s[length] <= '9') {
      power *= 10;
      printf("power is %f\n", power);
    }
  }
  printf("Length of whole string is %i\n", length);

  /* for ea. number in string, multiply by power 
   * and add to n */
  for (index = 0; index != length; index++) {
    printf("s[index] is s[%i]\n", index);
    if (s[index] >= '0' && s[index] <= '9') {
      printf("s[%i] is '%c', or %d.\n", index, s[index], s[index]);
      n += (s[index] - 48) * power;
      power /= 10;
    }
  }
  printf("n is %d\n", n);
  printf("return value is ");
  return n;
} 
