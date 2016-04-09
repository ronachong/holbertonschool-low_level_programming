/* advanced_search loops thru an int array and checks to see
   whether any of the ints match the value provided by the
   function referenced by pointer parameter."
 */

int advanced_search(int *array, int size, int (*check_func)(int)) {
  int i;

  for (i = 0; i < size; i++) {
    if (check_func(array[i]) == 1) {
      return 1;
    } 
  }

  /* if computer goes thru whole loop without conditional succeeding: */
  return -1;
}
