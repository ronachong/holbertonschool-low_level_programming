#include <stdio.h> /* needed for perror */

/* headers for open, stat */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include  <unistd.h>

/* int print_content(int, char **); */
/* int copy_content(int argc, char **argv); */
int print_permissions(int argc, char **argv);
int check_arguments(int);
int print_char(char c);
