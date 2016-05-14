#include "header.h"
/* This file will contain the shell function for a simple shell. */

int shell(int ac, char **av, char **env)
{
  int running;
  char **argv;
  char **paths;

  ac = ac;
  av = av;
  running = 1;

  while (running) {
      print_prompt();
      argv = get_argv();

      /* if no builtins were invoked */
      if (builtins(argv, env, &running) == 0) {
	paths = get_paths(env[8]); /* will index vary by OS..? */
	paths = paths;
	create_subshell(argv, env);
      }

      /* free everything: including, argv pointer and strings inside */
      free_argv(argv);
    }
  return 1;

  /* return any values for success? or error? */
}
