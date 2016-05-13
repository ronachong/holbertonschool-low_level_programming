#include "header.h"
/* This file will contain the shell function for a simple shell. */

int shell(void)
{
  char **std_input;
  pid_t pid;

  print_prompt();
  argv = get_argv();

  pid = fork();
  if (pid == -1) {
    perror("fork()");
    return 0;
  }
  if (pid == 0) {
    /* execute cmd */;
    /* potentially pass values to parent? */;
    /* exit */;
  }
  else {
    wait(addr_to_store_to);
    /* recursive call to bring prompt back to ready? */;
    /* handle ctrl + D to end shell; later on maybe accept a cmd to quit */;
  }

  /* free everything: including, argv pointer and strings inside */

  /* return any values for success? or error? */
}
