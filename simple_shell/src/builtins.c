#include "header.h"

/*
 * builtins checks the arguments passed to a shell from std input and runs the
 * appropriate function if a command for a builtin is passed.
 */

int builtins(char **argv, char **env)
{

  if (string_comparison(argv[0], "env") == 1)
    print_env(env);
  else if (string_comparison(argv[0], "exit") == 1)
    exit_shell();
  return 1;
}

int print_env(char **env) {
  int i;
  for (i = 0; env[i] != NULL; i++) {
    printf("%s\n", env[i]);
  }

  return 0 /* for success */;
}

int exit_shell(void) {
  printf("This will have to be an actual function later.\n");
  return 1;
}
