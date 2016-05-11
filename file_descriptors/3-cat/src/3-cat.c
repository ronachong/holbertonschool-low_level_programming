#include "3-header.h"

/* print_content 
   checks if the number of arguments is right,
   opens the file passed from command line,
   reads its contents,
   and writes to std. output.
*/

int print_content(int argc, char **argv) {
  int i;
  int fd;  
  char buffer[18];
  char error[5] = "cat: ";

  for (i = 1; i < argc; i++) {
    /* open file with name of cmd line arg, with read only permissions */
    fd = open(argv[i], O_RDONLY);
  
    /* handle any errors */
    if (fd == -1) {
      write(1, error, 5);
      write(1, argv[i], 5);
      perror("open(argv[1], O_RDONLY)");
      return 0;
      }

    /* read file contents into buffer & print till all contents read */
    read_and_print(fd, buffer, 18);
  
    close(fd);
  
  }
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
  return 1;
}
