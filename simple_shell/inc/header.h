/* This file will contain library include directives & prototypes for the simple
   shell program */

/* includes */
#include <unistd.h> /* write, fork, execve */
#include <stdio.h> /* perror */
#include <stdlib.h> /* malloc, free */
#include <sys/types.h> /* wait */
#include <sys/wait.h> /* wait */
#include "libshell.h" /* read_line, split_string */

/* prototypes */
int shell (int ac, char **av, char **env);
int print_prompt(void);
char **get_argv(void);
int free_argv(char **argv);
