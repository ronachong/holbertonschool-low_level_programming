#include <stdio.h>

int string_to_integer(char *s) {
  int length;
  float power = 0.1;
  int index;
  int n = 0;
  int status = 0;
  int sign = 1;
  int amt_to_add;

  
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

  /* loop through array till end of first number */
  for (index = 0; index != length; index++) {

    /* calculate sign of number  */
    if (s[index] == '-') {
      sign *= -1;
    }

    /* for each digit, multiply by its power and add to n */
    if (s[index] >= '0' && s[index] <= '9') {
      amt_to_add = (s[index] - 48) * power;

      /* except in cases of overflow */
      if (amt_to_add == 2147483648 - n && sign == -1) { /* n is equal to int_min */ 
	return -2147483648;                     
      }

      if (amt_to_add > 2147483647 - n) {
	return 0;
      }
      
      n += amt_to_add;
      power /= 10;
    }
  }

  /* apply sign to n */
  n *= sign;
  return n;
} 
