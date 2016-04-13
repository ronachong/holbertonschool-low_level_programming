#include <stdlib.h>

int **alloc_grid(int width, int height) {
  int **int_grid;
  /* int_grid is a 2-dimensional grid composed of arrays for rows
   * and ints within arrays to form columns */
  /* practically speaking, int_grid is an array of pointers to arrays */
  /* memory to allocate must be calculated for ints in the arrays themselves, but
   * not necessarily the pointers to the arrays. */
  int i;
  int j;
  
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
