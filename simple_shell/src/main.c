#include "header.h"
/* This file will contain the main function for a simple shell. */

int main(int ac, char **av, char **env)
{
  if (shell(ac, av, env) == 1)
    return 0;

  /* else */
  return 1;
}
