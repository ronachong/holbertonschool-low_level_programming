#include "header.h"

/*
 * free_argv frees the memory for each string inside argv,
 * then frees argv, the pointer to those strings, itself
 */

int free_argv(char **argv)
{
  int i;
  for (i = 0; argv[i] != NULL; i++) {
    free(argv[i]);
  }

  free(argv);
  return 1;
}
