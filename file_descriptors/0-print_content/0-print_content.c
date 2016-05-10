#include "0-header.h"

/* print_content 
   checks if the number of arguments is right,
   then opens the file with RD permissions (assuming the file already exists),
   and reads the file,
   printing contents to std output.
*/

int print_content(int argc, char **argv) {
  int fd;  
  char buffer[32];

  
  if (check_arguments(argc) == 0) {
    return 0;
  }

   /* else */
  /* open file with name of cmd line arg, with read only permissions */
  fd = open(argv[1], O_RDONLY);
  
  /* might want to add perror here? */
  if (fd == -1) {
    perror("open(argv[1], O_RDONLY)");
    return 0;
  }

  /* read file contents into buffer & print till all contents read */
  read_and_print(fd, buffer, 32);

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


/* read_and print reads from a file to a buffer and prints
   from buffer continuously until all contents have been
   printed.
*/

int read_and_print(int fd, char *buffer, int bytes) {
  int bytes_read_into_buffer;

  bytes_read_into_buffer = read(fd, buffer, bytes);
  write(1, buffer, bytes_read_into_buffer);

  /* recursive call */
  if (bytes_read_into_buffer == bytes) {
    return read_and_print(fd, buffer, bytes);
  }

  /* else */
  return 1;
}
