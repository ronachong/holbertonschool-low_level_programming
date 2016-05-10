int print_content(int, char **);

/* main file takes in arguments (i.e. string for file name) and passes it along to
   print_content */

int main(int argc, char **argv) {
  if (print_content(argc, argv) == 1) {
    return 0;
  }

  /* else */
  return 1;
}
