char *leet(char *s) {
  /* what do I want to do?
     loop through string;
     check if any chars match aeotl or AEOTL;
     replace with respective number.
  */

  int i;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == 'a' || s[i] == 'A') {
      s[i] = '4';
    }
    else if (s[i] == 'e' || s[i] == 'E') {
      s[i] = '3';
    }
    else if (s[i] == 'o' || s[i] == 'O') {
      s[i] = '0';
    }
    else if (s[i] == 't' || s[i] == 'T') {
      s[i] = '7';
    }
    else if (s[i] == 'l' || s[i] == 'L') {
      s[i] = '1';
    }
  }
  return s;
}
