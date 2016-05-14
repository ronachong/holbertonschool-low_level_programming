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
int builtins(char **argv, char **env);
int string_comparison(char *s1, char *s2);
int string_length(char *s);
int print_env(char **env);
int exit_shell(void);
int free_argv(char **argv);
