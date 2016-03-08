#include <stdio.h>

int string_to_integer(char *s) {
  int length;
  float power = 0.1;
  int index;
  int n = 0;
  int status = 0;
  int sign = 1;
  int amt_to_add;

  printf("\n");
  /* figure out length of array to loop thru; also power of number */
  for (length = 0; status == 0; length++) {
    if (s[length] >= '0' && s[length] <= '9') {
      if (status == 0) {
	  power *= 10;
	}
      if (s[length + 1] < '0' || s[length + 1] > '9') {
	  status = 1;
	}
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
      printf("Amt prior to adding: %i\n", n);
      amt_to_add = (s[index] - 48) * power;
      printf("Amt to add: %i\n", amt_to_add);
      
      if (amt_to_add > 2147483647 - n && sign == 1) {
	printf("I see that the num is positive and the amt to add will be too high.\n");
	return 0;                     
      }
      
      n += amt_to_add;
      power /= 10;
    }
  }
  
  n *= sign;
  return n;
} 
