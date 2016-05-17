#include "header.h"

/* 
 * get_fp searches the list of directory paths provided to it and locates the
 * first directory containing a file matching argv0.
 */

char *get_fp(char *argv0, char **paths) {
  int i;
  DIR *dir_p;
  struct dirent *dir_ent_p;
  char* tmp;
  char *abs_path;
  
  for (i = 0; paths[i] != NULL; i++) {
    dir_p = opendir(paths[i]);
    if (dir_p == NULL) {
      print_string(paths[i]);
      perror("opendir(paths[i])");
    }

    while ((dir_ent_p = readdir(dir_p)) != NULL) {
      if (string_comparison(argv0, dir_ent_p->d_name) == 1) {
	tmp = concat_string(paths[i], "/");
	abs_path = concat_string(tmp, argv0);
	free(tmp);
	closedir(dir_p);
	return abs_path;
      }
    }
    closedir(dir_p);
  }

  return NULL;
}
