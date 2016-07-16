/*
 * insertion_sort takes in an int array, @array, and an int representing
 * the size of the given array, @size, for its parameters.
 * insertion_sort sorts the given array into ascending order via an insertion
 * sort.
 */

void insertion_sort(int *array, int size)
{
  int i;
  int ind;
  int tmp;

  for (ind = 0; ind < size; ind++) {
    for (i = ind; i > 0; i--) {
      if (array[i] < array[i - 1]) {
    	tmp = array[i];
    	array[i] = array[i - 1];
    	array[i - 1] = tmp;
      }
    }
  }
}
