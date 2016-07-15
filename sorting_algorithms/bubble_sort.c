/*
 * bubble_sort takes in an int array, @array, and bubble-sorts the given array
 * into ascending order.
 */

void bubble_sort(int *array, int size)
{

  int i;
  int j;
  int indices;
  int tmp;

  for (i = 0, indices = size - 1; i < size - 1; i++, indices--) {
     for (j = 0; j < indices; j++) {
       if (array[j] > array[j + 1]) {
	 tmp = array[j];
	 array[j] = array[j + 1];
	 array[j + 1] = tmp;
      }
    }
  }
}
