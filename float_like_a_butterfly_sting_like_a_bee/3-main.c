#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int, int);
void print_grid(int **grid, int width, int height) {
  int i;
  int j;
  /* let's see... loop thru grid, print ea. value, followed by comma or /n */
  for (i = 0; i < height; i++) {
    for (j = 0; j < width; j++) {
      printf("%d", grid[i][j]);
      if (j != width - 1) {
	printf(", ");
      }	else {
	printf("\n");
      }
    }
  }
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
