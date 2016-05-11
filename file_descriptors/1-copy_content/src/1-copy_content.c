#include "1-header.h"

int copy_content(int argc, char **argv) {
  int fd_origin;
  int fd_dest;
  char buffer[18];

  
  if (check_arguments(argc) == 0) {
    return 0;
  }

  /* else */
  /* open file with name of 1st cmd line arg, with read only permissions */
  fd_origin = open(argv[1], O_RDONLY);
  
  /* handle any errors */
  if (fd_origin == -1) {
    perror("open(argv[1], O_RDONLY) (opening file to copy)");
    return 0;
  }

  /* open file with name of 2nd cmd line arg, with read/write permissions &
   * create option if file does not exist, -rw-r--r-- */
  fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00644);
  
  /* handle any errors */
  if (fd_dest == -1) {
    perror("open(argv[2], O_RDWR | O_CREAT, 00644) (opening file to which to write)");
    return 0;
  }

  /* read contents of origin file into buffer & write to destination file till
   * all contents read */
  return read_and_write(fd_origin, fd_dest, buffer, 18);
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


/* read_and_write reads from a file to a buffer and write
   from buffer to destination filecontinuously until all contents
   have been written.
*/

int read_and_write(int fd_origin, int fd_dest, char *buffer, int bytes) {
  int bytes_read_into_buffer;

  /* read contents of origin file into buffer & store return
     into var; handle any errors if they occur */
  bytes_read_into_buffer = read(fd_origin, buffer, bytes);
  if (bytes_read_into_buffer == -1) {
    perror("read(fd_dest, buffer, bytes");
    return 0;
  }

  /* write chars read into buffer to destination file (handling
   * errors if they occur) */
  if (write(fd_dest, buffer, bytes_read_into_buffer) == -1) {
    perror("write(fd_dest, buffer, bytes");
    return 0;
  }

  /* recursive call */
  if (bytes_read_into_buffer == bytes) {
    return read_and_write(fd_origin, fd_dest, buffer, bytes);
  }

  /* else */
  return 1;
}
