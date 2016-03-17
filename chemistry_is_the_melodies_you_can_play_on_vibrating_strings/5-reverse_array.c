#include <stdio.h>

/* what do I want to do? */
/* find halfway pt of array by using n;
   loop thru and switch each int with its respective value UP TO
   half way point.
   deal with variability by changing halfway pt depending on even, odd length.
 */

void reverse_array(int *a, int n) {
  int i;
  int val1;
  int val2;

  /* find half-way pt of string */
  /* if length is even, make adjustment for calculating halfway pt from n */
  if (n % 2 == 0) {
    n = n - 1;
  }

  for (i = 0, n = n; i < n/2; i++) {
    /* fetch original values */
    val1 = a[i];
    val2 = a[n - 1 - i]; /* i is used as an index decrementer for ea. loop */

    /* swap values in array */
    a[i] = val2;
    a[n - 1 - i] = val1;
  }
}
