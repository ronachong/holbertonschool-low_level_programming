#include "header.h"

/*
 * builtins checks the arguments passed to a shell from std input and runs the
 * appropriate function if a command for a builtin is passed.
 */

int builtins(char **argv, char **env, int *r_mem, int *ret_ptr)
{

  if (string_comparison(argv[0], "env") == 1) {
    print_env(env);
    return 1;
  }
  else if (string_comparison(argv[0], "exit") == 1) {
    exit_shell(r_mem);
    if (argv[1] == NULL) {
      set_return(ret_ptr, 0);
    } else {
      set_return(ret_ptr, atoi(argv[1]));
    }
    return 1;
  }

  /* if no builtins were invoked */
  return 0;
}

int print_env(char **env) {
  int i;
  for (i = 0; env[i] != NULL; i++) {
    print_string(env[i]);
    print_string("\n");
  }

  return 0 /* for success */;
}

int exit_shell(int *r_mem) {
  *r_mem = 0;
  return 1;
}

int set_return(int *ret_ptr, int argv1) {
  *ret_ptr = argv1;
  return 1;
}
