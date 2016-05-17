#include "header.h"

/*
 * create_subshell creates a new shell by forking the process of a parent shell
 */

int create_subshell(char **argv, char **env)
{
  pid_t pid;
  int status;

  status = 0;

  pid = fork();
  if (pid == -1) {
    perror("fork()");
    return 0;
  }
  if (pid == 0) {
    execve(argv[0], argv, env);
    /* potentially handle error from execve? */
    return 1 /* exit */;
  }
  else {
    wait(&status);
  }

  return 1;
}
