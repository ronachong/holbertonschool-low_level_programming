/* lowercase(char) returns the lowercase
 * version of the input if it is an upper-
 * case character, or returns the inputted
 * character if not. */

char lowercase(char c) {
  if (c >= 'A' && c <= 'Z') {
    return(c + 32);
  }
  else {
    return(c);
  }
}
