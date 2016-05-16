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
  
  
  printf("Running get_fp.\n");
  printf("paths contains:\n");
  for (i = 0; paths[i] != NULL; i++) {
    printf("%s\n", paths[i]);
  }

  for (i = 0; paths[i] != NULL; i++) {
    dir_p = opendir(paths[i]);
    if (dir_p == NULL) {
      printf("the directory is %s\n", paths[i]);
      perror("opendir(paths[i])");
    }

    printf("Running while loop, loop #%i\n", i);
    printf("dir_p is %p\n", (void *)dir_p);
    while ((dir_ent_p = readdir(dir_p)) != NULL) {
      if (string_comparison(argv0, dir_ent_p->d_name) == 1) {
	tmp = concat_string(paths[i], "/");
	abs_path = concat_string(tmp, argv0);
	free(tmp);
	return abs_path;
      }
    }
  }

  return NULL;
}
