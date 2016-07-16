#include <stdio.h>

/*
 * quick_sort takes in an int array @array, and an int representing the size of
 * the given array, @size.
 * quick_sort sorts the given array into ascending order via quick sort.
 */

/* void quick_sort(int *array, int size) */
/* { */
/*   ; */
/* } */

/* 
 * partition takes in the following parameters:
 * - int array @array
 * - int representing size of @array, @size
 * - int representing pivot value for partition, @pivot 
 * partition arranges the given array such that the first half of @array con-
 * tains values less than the pivot, and the second half contains values greater
 * than the pivot.
 */
void partition(int *array, int size, int pivot)
{
  int s1;
  int s2;
  int tmp;

  /* start with s1 at beginning of array (val = 0) */
  /* start with s2 at end of array (val = size) */
  s1 = 0;
  s2 = size;

  while (s1 != s2) {
  /* check if value at s1 is equal to or greater than pivot */
  /* if not, increment s1, till it is */
    while (array[s1] < pivot) {
      s1++;
      printf("s1 increased to %d\n", s1);
    }
  /* check if value at s2 is equal to or less than pivot */
  /* if not, increment s2, till it is */
    while (array[s2] > pivot) {
      s2--;
      printf("s2 increased to %d\n", s2);
    }

    /* swap values at s1 and s2 */
    tmp = array[s1];
    array[s1] = array[s2];
    array[s2] = tmp;
    printf("swapped s1 and s2\n");
  
  /* repeat */
  /* end when the value at s1 and s2 are both equal to the pivot */
  }
}
