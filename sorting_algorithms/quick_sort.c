#include <stdio.h>
#include <stdlib.h>
void print_array(int *, int); /*here for testing reasons */
int *make_parray(int size);
int partition(int *array, int s1, int size, int pivot);

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
  int pval;
  int s1;

  /* create parray to track partition points/pivots */
  parray = make_parray(size);
  if (parray == NULL)
    return;

  /* start with sa_size = size and s1 = 0 -> subarray as whole array */
  sa_size = size;
  s1 = 0;
  
  /* while size of subarray is greater than 2 */
  while (sa_size > 2) {
    /* find value to pivot around */
    pval = array[rand() % sa_size];
    /* partition */
    p = partition(array, s1, sa_size, pval);
    printf("p is %d\n", p);
    /* update subarray size to reflect size of Lmost subarray resulting from
       partition */
    sa_size = p - s1;
    /* record pivot point in parray */
    parray[p] = 1;
  }

  print_array(parray, size + 1);
  /* when leftmost subarray is size less than 3:
     update s1 to previous p
     update p to next p stored in array */

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
