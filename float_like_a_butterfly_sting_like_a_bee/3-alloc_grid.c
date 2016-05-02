#include <stdio.h>
#include <stdlib.h>

/* alloc_grid() creates a 2D grid of ints according to the following steps:
   allocate memory for the outer array of a 2D array, based on height;
   loop through the # of inner arrays and allocates memory for each inner array, based on width;
   assign the pointer to each inner array as an element of the outer array;
   initilize each element in the inner arrays to 0.
*/

int **alloc_grid(int width, int height) {
  int **int_grid;
  /* int_grid is a 2-dimensional grid composed of arrays for rows
   * and ints within arrays to form columns */
  /* practically speaking, int_grid is an array of pointers to arrays */

  int i;
  int j;
  
  /* allocate memory for the outer array of a 2D array, based on height; */
  int_grid = malloc(sizeof(int *)*height);

  /* allocate space to host arrays of ints; assign addresses
   * as values for int_grid */
  for (i = 0; i < height; i++) {
    int_grid[i] = malloc(sizeof(int)*width);
    /* now let's assign the 0's to each val inside array */
    for (j = 0; j < width; j++) {
      int_grid[i][j] == 0;
    }
  }
  return int_grid;
}
