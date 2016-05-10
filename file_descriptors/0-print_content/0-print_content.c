/* print_content 
   checks if the number of arguments is right,
   then opens the file with RD permissions (assuming the file already exists),
   and reads the file,
   printing contents to std output.
*/

int print_content(int argc, char **argv) {
  char *(or buffer?) contents;

  check_arguments(argc);
  open(argv, other params);
  contents = read(argv, other params);
  write(contents, params including std output);

  return 1;
}
