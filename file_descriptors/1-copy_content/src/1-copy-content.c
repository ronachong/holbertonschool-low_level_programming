#include "1-header.h"

int copy_content(int argc, char **argv) {
  int fd;  
  char buffer[18];

  
  if (check_arguments(argc) == 0) {
    return 0;
  }

  /* else */
  /* open file with name of cmd line arg, with read only permissions */
  fd = open(argv[1], O_RDONLY);
  
  /* handle any errors */
  if (fd == -1) {
    perror("open(argv[1], O_RDONLY)");
    return 0;
  }

  /* read file contents into buffer & print till all contents read */
  return read_and_print(fd, buffer, 18);
}



/* check_arguments checks if the right number of arguments
   for print_content has been passed, and returns 1 for yes,
   0 for no.
*/

int check_arguments (int argc) {
  if (argc != 3) {
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

  /* read contents of file into buffer & store return
     into var; handle any errors if they occur */
  bytes_read_into_buffer = read(fd, buffer, bytes);
  if (bytes_read_into_buffer == -1) {
    perror("read(fd, buffer, bytes");
    return 0;
  }

  /* write chars read into buffer to std output (handling
   * errors if they occur) */
  if (write(1, buffer, bytes_read_into_buffer) == -1) {
    perror("write(fd, buffer, bytes");
    return 0;
  }

  /* recursive call */
  if (bytes_read_into_buffer == bytes) {
    return read_and_print(fd, buffer, bytes);
  }

  /* else */
  return 1
