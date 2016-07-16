#include <stdio.h>
#include <stdlib.h>
int partition(int *array, int size, int pivot);

/*
 * quick_sort takes in an int array @array, and an int representing the size of
 * the given array, @size.
 * quick_sort sorts the given array into ascending order via quick sort.
 */

void quick_sort(int *array, int size)
{
  int pivot;
  int s1;

  /* start with size = size and s1 = 0 */
  /* size is greater than 2, so partition array:
     make pivot (pivot = array[rand() % csize];)
     run partition with s1 and size, store return as p */

  /* calculate size of subarray starting from left:
     using size = p - s1 */
  /* while size is greater than 2, partition further */

  /* when leftmost subarray is size less than 3:
     update s1 to previous p
     update p to next p stored in array */

  /* repeat partition cycle, until find_pnext returns the extra/last index
     in track array */

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
int partition(int *array, int size, int pivot)
{
  int s1;
  int s2;
  int tmp;

  s1 = 0;
  s2 = size - 1;

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
  return s1;
}
