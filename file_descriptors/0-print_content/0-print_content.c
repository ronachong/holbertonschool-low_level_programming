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


int check_arguments (int argc) {
  if (argc != 2) {
    return 0;
  }
  
  /* else */
  return 1;
}


int read_and_print(int fd, char *buffer, int bytes) {
  int bytes_read_into_buffer;

  bytes_read_into_buffer = read(fd, buffer, bytes);
  write(1, buffer, bytes_read_into_buffer);

  /* recursive call */
  if (bytes_read_into_buffer == bytes) {
    printf("I think there's still more to read to buffer and write.\n");
    return read_and_print(fd, buffer, bytes);
  }

  /* else */
  return 1;
}


/*
int print_string(char *string) {
  int bytes_written;
  int bytes_to_write;

  printf("running print_string.\n");

  bytes_to_write = 32;
  bytes_written = write(1, string, bytes_to_write);
  printf("bytes written = %i\n", bytes_written);
  printf("bytes to write = %i\n", bytes_to_write);

  if (bytes_to_write == bytes_written) {
    printf("entering if statement.\n\n");
    return print_string(string);
  }

  return 1;

  * not sure if string is of right type (const void *buf) for write *
}
*/

int print_char(char c) {
  return (write(1, &c, 1));
}
