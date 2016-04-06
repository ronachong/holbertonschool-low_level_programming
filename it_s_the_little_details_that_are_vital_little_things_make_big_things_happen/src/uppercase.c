/* uppercase(char c) converts any
 * lowercase character inputs to
 * uppercase, and returns c as an
 * output.
 */

char uppercase(char c) {
  if (c >= 'a' && c <= 'z') {
    c -= 32;
  }

  return(c);
}
