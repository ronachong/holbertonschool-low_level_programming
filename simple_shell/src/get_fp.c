#include "header.h"

/* 
 * get_fp searches the list of directory paths provided to it and locates the
 * first directory containing a file matching argv0.
 */

char *get_fp(char *argv0, char **paths) {
  int i;
  DIR *dir_p;
  struct dirent *dir_ent_p;
  
  printf("This is a test.\n");

  argv0 = argv0;
  paths = paths;

  for (i = 0; paths[i] != NULL; i++) {
    printf("Iteration at %s\n", paths[i]);
    dir_p = opendir(paths[i]);
    while ((dir_ent_p = readdir(dir_p)) != NULL) {
      printf("%s\n", dir_ent_p->d_name);
    }
  }
  return dir_ent_p->d_name;
}
