#include <stdio.h> /* needed for perror */
#include  <unistd.h>

/* headers for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* int print_content(int, char **); */
int copy_content(int argc, char **argv);
int check_arguments(int);
int read_and_print(int fd, char*buffer, int bytes);
