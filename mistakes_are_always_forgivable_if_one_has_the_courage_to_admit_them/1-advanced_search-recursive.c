/* advanced_search loops thru an int array and checks to see
   whether any of the ints match the value provided by the
   function referenced by pointer parameter."
 */

int check(int*array,int size, int(*check_func)(int), int i);

int advanced_search(int *array, int size, int (*check_func)(int)) {
  return check(array, size, &check_func, 0);
}

int check(int*array,int size, int(**check_func)(int), int i) {
  /* if we reach i == size; none match, return -1 */
  if (i == size) {
    return -1;
  }

  /* else */
  /* if check_func returns 1, we have a match, return 1 */
  if (check_func(array[i]) == 1) {
    return 1;
  }

  /* ELSE */
  /* if check_func returns 0, but i != 6, make recursive call */
  return check(array, size, &check_func, i + 1);
}
