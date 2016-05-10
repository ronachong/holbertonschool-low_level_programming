#include <stdio.h> /*get rid of this later */

#include  <unistd.h>

/* headers for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int print_content(int, char **);
int check_arguments(int);
int print_string(char *string);
int print_char(char c);
