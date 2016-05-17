#include "header.h"
/* This file will contain the shell function for a simple shell. */

int shell(int ac, char **av, char **env)
{
  int running;
  char **argv;
  char **paths_array;
  char* abs_path;

  ac = ac;
  av = av;
  running = 1;

  while (running) {
      print_prompt();
      argv = get_argv(); /* malloc happens for argv, freed at end */

      /* if no builtins were invoked */
      if (builtins(argv, env, &running) == 0) {
	paths_array = get_patharr(env); /* malloc happens for paths_array, freed at end */
	abs_path = get_fp(argv[0], paths_array); /* malloc happens for abs_path, which is freed as part of argv @ end */
	if (abs_path == NULL) {
	  print_string(argv[0]);
	  print_string(": command not found\n");
	} else {
	  printf("freeing %s\n", argv[0]);
	  free(argv[0]);
	  argv[0] = abs_path;
	  create_subshell(argv, env);
	}
	/* free paths_array after executing command */
	free_2Darr(paths_array);
      }

      /* free everything: including, argv pointer and strings inside */
      free_2Darr(argv);
    }
  return 1;

  /* return any values for success? or error? */
}
