#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int, int);
void print_grid(int **grid, int width, int height) {
  /* grid is a return from alloc_grid -- i.e. a pointer to a grid?
     would it not still be a pointer to one spot in memory?
     why is it a pointer to a pointer? */
  ;
}

int main()
{
  int **grid;

  grid = alloc_grid(5, 5);
  print_grid(grid, 5, 5);
  printf("\n");
  grid[2][3] = 98;
  grid[4][4] = 402;
  print_grid(grid, 5, 5);
  return (0);
}
