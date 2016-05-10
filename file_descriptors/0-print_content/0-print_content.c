/* print_content 
   checks if the number of arguments is right,
   then opens the file with RD permissions (assuming the file already exists),
   and reads the file,
   printing contents to std output.
*/

int print_content(int argc, char **argv) {
  argc = argc;
  argv = argv;
  char * /*(or buffer?)*/ contents;

  print_string("Test.\n");

  /*
  if (check_arguments(argc) == 0) {
    return 0;
  }

  open(argv, other params);
  contents = read(argv, other params);
  write(contents, params including std output); */

  return 1;
}


int check_arguments (int argc) {
  if (argc != 2) {
    return 0;
  }
  
  /* else */
  return 1;
}


int print_string(char *string) {
  return (write(1, string, 32)); /* not sure if string is of right type (const void *buf) for write */
}
