#include <stdlib.h>

int **alloc_grid(int width, int height) {
  int **int_grid;
  /* int_grid is a 2-dimensional grid composed of arrays for rows
   * and ints within arrays to form columns */
  /* practically speaking, int_grid is an array of pointers to arrays */
  /* memory to allocate must be calculated for both pointers to the arrays
   * (to be stored in int_grid) and for the ints in the arrays themselves */
  int i;
  int j;
  
  /* allocate writable memory for pointers to row arrays; store
   * pointer to allocated memory in int_grid */
  /* actually... do we really have to allocate memory, or can we
   * just create int_grid using read-only memory?
   * the only thing we need to write to is inside the actual arrays themselves... */
  int_grid = malloc(sizeof(int*)*height);

  /* alt ver would be:
     int_grid[height]; */

  /* allocate space to host arrays of ints; assign addresses
   * as values for int_grid */
  for (i = 0; i < height; i++) {
    int_grid[i] = malloc(sizeof(int)*width);
    /* now let's assign the 0's to each val inside array */
    for (j = 0; j < width; j++) {
      int_grid[i][j] == 0;
    }
  }

  
  }
}
