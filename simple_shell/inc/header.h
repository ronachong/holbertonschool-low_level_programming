/* This file will contain library include directives & prototypes for the simple
   shell program */

/* includes */
#include <unistd.h> /* write, fork, execve */
#include <stdio.h> /* perror */
#include <stdlib.h> /* malloc, free */
#include "libshell.h"

/* prototypes */
int shell (void);
int print_prompt(void);
char **get_argv(void);
char *read_line(const int fd);
