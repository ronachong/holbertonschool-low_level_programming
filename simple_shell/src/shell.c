#include "header.h"
/* This file will contain the shell function for a simple shell. */

int shell(int ac, char **av, char **env)
{
  char **argv;
  pid_t pid;
  pid_t *status;

  ac = ac;
  av = av;

  print_prompt();
  argv = get_argv();

  pid = fork();
  if (pid == -1) {
    perror("fork()");
    return 0;
  }
  if (pid == 0) {
    execve("/usr/bin/ssh-add", ["usr/bin/ssh-add", "foo"], env); /* later: execve(argv[0], argv, env); */
    /* potentially pass values to parent? */
    return 1 /* exit */;
  }
  else {
    wait(status);
    printf("My child has finished\n");
    /* recursive call to bring prompt back to ready? */
    /* handle ctrl + D to end shell; later on maybe accept a cmd to quit */
  }

  /* free everything: including, argv pointer and strings inside */
  free_argv();

  /* return any values for success? or error? */
}
