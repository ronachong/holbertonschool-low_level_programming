/* This file will contain library include directives & prototypes for the simple
   shell program */

/* includes */
#include <unistd.h> /* write */
#include <stdio.h> /* perror */
#include <stdlib.h> /* malloc, free */


/* prototypes */
int shell (void);
int print_prompt(void);
char *read_line(const int fd);
