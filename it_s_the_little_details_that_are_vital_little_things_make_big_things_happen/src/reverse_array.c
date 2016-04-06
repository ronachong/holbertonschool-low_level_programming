/* what do I want to do? */
/* find halfway pt of array by using n;
   loop thru and switch each int with its respective value UP TO
   half way point.
   deal with variability by changing halfway pt depending on even, odd length.
 */

void reverse_array(int *a, int n) {
  int i;
  int stop;
  int val1;
  int val2;

  /* adjust n to represent max index of array */
  n -= 1;

  /* calculate stop point based on n */
  stop = n/2;
  if (n % 2 == 0) {
    stop -= 1;
  }
  
  for (i = 0, n = n; i <= stop; i++) {
    /* fetch original values */
    val1 = a[i];
    val2 = a[n - i]; /* i is used as an index decrementer for ea. loop */

    /* swap values in array */
    a[i] = val2;
    a[n - i] = val1;
  }
}
