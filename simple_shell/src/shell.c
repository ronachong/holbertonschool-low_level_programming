#include "header.h"
/* This file will contain the shell function for a simple shell. */

int shell(void)
{
  char **std_input;
  pid_t pid;

  print_prompt();
  std_input = read_std_input();

  pid = fork(?);
  if (pid == -1) {
    /* do error handling */;
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

  /* return any values for success? or error? */
}
