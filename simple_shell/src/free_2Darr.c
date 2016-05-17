#include "header.h"

/*
 * free_argv frees the memory for each string inside argv,
 * then frees argv, the pointer to those strings, itself
 */

int free_2Darr(char **arr)
{
  int i;
  for (i = 0; arr[i] != NULL; i++) {
    printf("the pointer being freed is %p, containing the string %s\n", (void *)(arr + i), arr[i]);
    free(arr[i]);
    arr[i] = NULL;
  }

  free(arr);
  return 1;
}
