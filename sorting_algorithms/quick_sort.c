#include <stdio.h>

/*
 * quick_sort takes in an int array @array, and an int representing the size of
 * the given array, @size.
 * quick_sort sorts the given array into ascending order via quick sort.
 */

void quick_sort(int *array, int size)
{
  ;
}

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

  s1 = 0;
  s2 = size;

  while (s1 != s2) {

    while (array[s1] < pivot) {
      s1++;
    }

    while (array[s2] > pivot) {
      s2--;
    }

    tmp = array[s1];
    array[s1] = array[s2];
    array[s2] = tmp;
  }
}
