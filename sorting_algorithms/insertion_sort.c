/*
 * insertion_sort takes in an int array, @array, and an int representing
 * the size of the given array, @size, for its parameters.
 * insertion_sort sorts the given array via an insertion sort.
 */

void insertion_sort(int *array, int size)
{
  int r;
  int i;
  int ind;
  int tmp;

  for (r = 0; r < size; r++, ind++) {
    /* in each round, sort up to i many indices in the array,
       i.e., compare each item in the array prior to array[ind] with array[ind] */
    for (i = ind; i > 0; i--) {
      if (array[i] < array[i - 1]) {
	tmp = array[i];
	array[i] = array[i - 1];
	array[i - 1] = tmp;
      }
    }
  }
}
