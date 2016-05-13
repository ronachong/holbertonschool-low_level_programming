#include "header.h"

/* use this to test functions being iterated upon */

int main(int ac, char **av, char **env)
{
  int i;
  char **argv;
  int return_val;

  ac = ac;
  av = av;
  env = env;

  print_prompt();

  argv = get_argv();
  printf("First argument is %s\n", argv[0]);
  for (i = 0; argv[i] != NULL; i++) {
    printf("'%s', ", argv[i]);
  }
  printf("\n");

  return_val = free_argv(argv);
  printf("The return val is %i\n", return_val);
  /* execve(argv[0], argv, env); */

  return 1;
}
