#include "header.h"

/*
 * get_paths parses the $PATH var, provided as the input, and returns an array of path
 * strings.
 */

char **get_paths(char *path_string)
{
  int i;
  char **split_string;
  char *path1;

  split_string = string_split(path_string, ':');
  path1 = string_split(split_string[0], '=')[1];  
  split_string[0] = path1;
  return paths;
}
