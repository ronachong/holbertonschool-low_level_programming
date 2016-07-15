/*
 * bubble_sort takes in an int array, @array, and bubble-sorts the given array
 * into ascending order.
 */

void bubble_sort(int *array, int size)
{
  int i;
  int indices;
  int tmp;

  for (i = 0; i < size - 1; i++, indices--) {
    for (i = 0, i < indices, i++) {
      if (array[1] > array[i + 1]) {
	tmp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = tmp;
    }
  }
}
