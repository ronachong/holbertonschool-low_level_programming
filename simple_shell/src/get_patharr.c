#include "header.h"

/*
 * get_paths parses the $PATH var, provided as the input, and returns an array of path
 * strings.
 */

char** get_patharr(char **env) {
  char *path_str;
  char **path_arr;

  if ((path_str = get_pathstr(env)) == NULL) {
    print_string("error: No PATH var was found in env./n");
    return NULL;
  }
  
  /* else */
  path_arr = string_split(path_str, ':');
  free(path_str);
  return path_arr;
}

/*
 * get_pathstr obtains the string after "PATH=" in env.
 * if no PATH var is found in env, it returns null.
 */

char *get_pathstr(char **env)
{
  int i;
  char **spl_str;
  char *path_str;

  for (i = 0; env[i] != NULL; i++) {
    spl_str = string_split(env[i], '=');
    if (string_comparison(spl_str[0], "PATH") == 1) {
      path_str = spl_str[1];
      free(spl_str[0]);
      free(spl_str);
      return path_str;
    }
    /* else */
    free_2Darr(spl_str);
  }

  /* if loop completes, i.e. no PATH var is found */
  return NULL;
}
