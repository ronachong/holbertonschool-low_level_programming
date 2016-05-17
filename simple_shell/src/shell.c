#include "header.h"
/* This file will contain the shell function for a simple shell. */

int shell(int ac, char **av, char **env)
{
  int running;
  int status;
  int ret_val;
  char **argv;
  char **paths_array;
  char *abs_path;

  ac = ac;
  av = av;
  running = 1;
  status = 1;
  ret_val = 0;

  add_retvar(env);  

  while (running) {
      print_prompt();
      argv = get_argv();

      /* if no builtins were invoked */
      if (builtins(argv, env, &running, &ret_val) == 0) {
	paths_array = get_patharr(env);
	abs_path = get_fp(argv[0], paths_array);
	if (abs_path == NULL) {
	  print_string(argv[0]);
	  print_string(": command not found\n");
	} else {
	  free(argv[0]);
	  argv[0] = abs_path;
	  create_subshell(argv, env, &status);
	}
	printf("the 'status' of the last executed process is %i\n", status);

	/* free paths_array after executing command */
	free_2Darr(paths_array);
      }

      /* free argv pointer and strings inside */
      free_2Darr(argv);
    }
  return ret_val;

  /* return any values for success? or error? */
}
