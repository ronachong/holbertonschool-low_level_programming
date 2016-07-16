#include <stdio.h>

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
  /* int tmp; */

  array = array;
  /* tmp = 0; */


    for (r = 0, ind = size - 1; r < size; r++, ind--) {
    for (i = ind; i > 0; i--) {
      printf("checking a[%d] with a[%d]\n", i, i - 1);
    /*   if (array[i] < array[i - 1]) { */
    /* 	tmp = array[i]; */
    /* 	array[i] = array[i - 1]; */
    /* 	array[i - 1] = tmp; */
    /*   } */
    }
    printf("\n");
  }
}
