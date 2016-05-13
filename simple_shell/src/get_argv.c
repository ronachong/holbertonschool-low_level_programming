#include "header.h"

/*
 * get_argv reads from standard input into a string and splits string into an
 * array of words, returning this array.
 */

char **get_argv(void)
{
 char *std_input;
 char **argv;

 std_input = read_line(0);
 argv = string_split(std_input, ' ');
 free(std_input);
 return argv;
}
