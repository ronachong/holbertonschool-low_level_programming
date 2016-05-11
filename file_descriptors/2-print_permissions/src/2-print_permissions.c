#include "2-header.h"

int print_permissions(int argc, char **argv) {
  struct stat file_stat;

  /* return 0 if wrong num of args */
  if (check_arguments(argc) == 0) {
    return 0;
  }

  /* else */
  /* lstat file passed from cmd line, returning 0 in case of failure */
  if (lstat(argv[1], &file_stat) == -1) {
    perror("lstat(argv[1], buffer)");
    return 0;
  }

  /* write chars reflecting file perms to std output */
  if (write(1, &file_stat, 1) == -1) {
    perror("write(1, &file_stat, 1)");
    return 0;
  }

  print_char( (S_ISDIR(file_stat.st_mode)) ? 'd' : '-');
  print_char( (file_stat.st_mode & S_IRUSR) ? 'r' : '-');
  print_char( (file_stat.st_mode & S_IWUSR) ? 'w' : '-');
  print_char( (file_stat.st_mode & S_IXUSR) ? 'x' : '-');
  print_char( (file_stat.st_mode & S_IRGRP) ? 'r' : '-');
  print_char( (file_stat.st_mode & S_IWGRP) ? 'w' : '-');
  print_char( (file_stat.st_mode & S_IXGRP) ? 'x' : '-');
  print_char( (file_stat.st_mode & S_IROTH) ? 'r' : '-');
  print_char( (file_stat.st_mode & S_IWOTH) ? 'w' : '-');
  print_char( (file_stat.st_mode & S_IXOTH) ? 'x' : '-');


  return 1;
}

/* check_arguments checks if the right number of arguments
   for print_content has been passed, and returns 1 for yes,
   0 for no.
*/

int check_arguments (int argc) {
  if (argc != 2) {
    return 0;
  }
  
  /* else */
  return 1;
}


int print_char(char c) {
  return write(1, &c, 1);
}
