#include "header.h"

/* use this to test functions being iterated upon */

int main(int ac, char **av, char **env)
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

  ac = ac;
  av = av;
  execve(argv[0], argv, env);
  printf("Does.. this work?\n");

  return 1;
}
