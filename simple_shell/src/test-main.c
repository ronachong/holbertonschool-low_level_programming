#include "header.h"

/* use this to test functions being iterated upon */

int main(void) {
  char *std_input;

  print_prompt();

  std_input = read_line(0);
  printf("this was read from std. input: %s\n", std_input);
  free(std_input);

  return 1;
}
