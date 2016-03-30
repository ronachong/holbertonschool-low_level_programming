int print_char(char c);

/* print_string(char *str) takes a string
 * as a parameter and prints it.
 */

void print_string(char *str) {
  int n;
  
  for (n = 0; str[n] != '\0'; n++) {
    print_char(str[n]);
  }
}
