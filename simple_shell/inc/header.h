/* This file will contain library include directives & prototypes for the simple
   shell program */

/* includes */
#include <unistd.h> /* write, fork, execve */
#include <stdio.h> /* perror */
#include <stdlib.h> /* malloc, free, atoi */
#include <sys/types.h> /* wait, closedir, opendir */
#include <sys/wait.h> /* wait */
#include <dirent.h> /* opendir, closedir, readdir */
#include "libshell.h" /* read_line, split_string */

/* prototypes */
int shell (int ac, char **av, char **env);
int print_prompt(void);
char **get_argv(void);
char **get_patharr(char **env);
char *get_pathstr(char **env);
int builtins(char **argv, char **env, int *r_mem, int *ret_ptr);
int set_return(int *ret_ptr, int argv1);
int string_comparison(char *s1, char *s2);
int string_length(char *s);
int print_env(char **env);
void print_string(char *s);
int exit_shell(int *r_mem);
char *get_fp(char *argv0, char **paths);
char *concat_string(char *s1, char* s2);
int create_subshell(char **argv, char **env, int *status_ptr);
int free_2Darr(char **arr);
