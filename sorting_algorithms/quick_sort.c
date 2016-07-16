#include <stdio.h>
#include <stdlib.h>
void print_array(int *, int); /*here for testing reasons */
int *make_parray(int size);
int partition(int *array, int s1, int size, int pivot);
int find_pnext(int p, int *parray, int size);

/*
 * quick_sort takes in an int array @array, and an int representing the size of
 * the given array, @size.
 * quick_sort sorts the given array into ascending order via quick sort.
 */

void quick_sort(int *array, int size)
{
  int *parray;
  int sa_size;
  int p;
  int pivot;
  int pval;
  int s1;

  /* create parray to track partition points/pivots */
  parray = make_parray(size);
  if (parray == NULL)
    return;

  /* start with sa_size = size and s1 = 0 -> subarray as whole array */
  sa_size = size;
  s1 = 0;
  p = -1;

  while (p != size) {
    /* while size of subarray is greater than 2 */
    while (sa_size > 2) {
      /* find value to pivot around */
      pivot = s1;
      pval = array[pivot];
      /* partition */
      p = partition(array, s1, sa_size, pval);
      /* update subarray size to reflect size of Lmost subarray resulting from
	 partition */
      sa_size = p - s1;
      /* record pivot point in parray */
      parray[p] = 1;
    }

    /* when leftmost subarray is size less than 3:
       update s1 to previous p + 1
       update p to next p stored in array */
    s1 = p + 1;
    p = find_pnext(p, parray, size);
    sa_size = p - s1;
  }
  /* repeat partition cycle, until find_pnext returns the extra/last index
     in track array */
  free(parray);
}

/*
 * make_parray takes in an integer value representing the size of an array to
 * quicksort, @size, and creates an array @parray of 0s terminated with 1, and
 * return @parray.
 * @parray is to be used by quick_sort to track the pivots made while partition-
 * ing the input array.
 */
int *make_parray(int size)
{
  int i;
  int *parray;

  parray = malloc(sizeof(int)*(size + 1));
  if (parray == NULL)
    return NULL;
  for (i = 0; i < size; i++) {
    parray[i] = 0;
  }
  parray[size] = 1;
  return parray;
}

/* 
 * partition takes in the following parameters:
 * - int array @array
 * - int representing the start index for partition, @s1
 * - int representing the size of the subarray of @array to partition, @size
 * - int representing pivot value for partition, @pivot 
 * partition arranges a specified subarray of @array such that the first half of
 * the given subarray contains values less than the pivot, and the second half
 * of the subarray contains values greater than the pivot.
 */
int partition(int *array, int s1, int size, int pivot)
{
  int s2;
  int tmp;

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

/*
 * find_pnext takes in the following parameters:
 * - the integer @p, representing the most recent pivot point in a quick sort
 *   of an int array
 * - the int array @parray, an array representing the pivot points so far for a
 *   quick sort of an int array
 * - the integer @size, representing the size of the array being sorted by the
 *   quick sort.
 * find_pnext returns the closest pivot point of a previous partition to the
 * right of @p, in the array being quick-sorted, or the 1-terminator of @parray.
 */
int find_pnext(int p, int *parray, int size)
{
  int i;

  for (i = p + 1; i < size + 1; i++) {
    if (parray[i] == 1)
      return i;
  }
  return -1;
}
