#include "header.h"

/* use this to test functions being iterated upon */

int main(void)
{
  int i;
  char **argv;

  print_prompt();

  argv = get_argv();
  printf("First argument is %s\n", argv[0]);
  for (i = 0; argv[i] != NULL; i++) {
    printf("'%s', ", argv[i]);
  }
  printf("\n");

  return 1;
}
