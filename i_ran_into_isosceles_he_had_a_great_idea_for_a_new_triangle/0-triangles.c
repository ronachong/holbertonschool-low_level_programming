#include <stdio.h>

/* triangles_in_term prints n number of
 * triangles with a height of h */

void triangles_in_the_term(int h, int n) {
  int h_store = h;
  int i;
  int l;
  int row = 0;

  for (; n > 0; n--) {
    for (; h > 0; h--) {
      row += 1;

      for (l = h - 1; l > 0; l--) {
	printf(" ");
      }

      for (i = 2 * (row - 1) + 1; i > 0; i--) {
	printf("*");
      }
      printf("\n");
    }
    h = h_store;
    row = 0;
  }
}
