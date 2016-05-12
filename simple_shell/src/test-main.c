#include "header.h"

/* use this to test functions being iterated upon */

int main(void) {
  int pp;

  pp = print_prompt();
  if (pp  == 1)
    return 0;
  else
    printf("print_prompt printed %i bytes\n", pp);
    return 1;
}
