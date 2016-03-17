char *rot13(char *s) {
  /* what do I want to do?
     loop through string, and if chars are
     alphabetic, shift 13 values over in ascii table.
  */
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 'a' && s[i] <= 'z' - 13) {
      s[i] += 13;
    }
    else if (s[i] > 'z' -  13 && s[i] <= 'z') {
      s[i] -= 13;
    }
    else if (s[i] >= 'A' && s[i] <= 'Z' - 13) {
      s[i] += 13;
    }    
    else if (s[i] > 'Z' -  13 && s[i] <= 'Z') {
      s[i] -= 13;
    }
  }
  return s;
}
