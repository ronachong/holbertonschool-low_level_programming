/* str_len(char *str) takes a string as
 * a parameter and returns its length.
 */

int str_len(char *str) {
  int n;

  /* going through each char in string
   * and adding to counter n until last
   * char is reached. */
  for (n = 0; *(str +n) != '\0'; n++) {
    ;
  }
  return (n);
}
