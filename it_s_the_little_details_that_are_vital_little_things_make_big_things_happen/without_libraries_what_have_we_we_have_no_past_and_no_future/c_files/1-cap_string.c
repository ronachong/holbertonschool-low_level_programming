char *cap_string(char *s) {
  /* What do I want to do? loop through string,
     find any spaces, tabs, or new lines, and capitalize next char (if it exists)

     OR
     loop through string,
     check if previous char were space, tab, or new line
     (this way I know the char I'm thinking about converting exists)
     capitalize, if lowercase char
  */
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      if (i == 0 || s[i-1] == ' ' || s[i-1] == 9 || s[i-1] == '\n') {
	s[i] -= 32;
      }
    }
  }
  return s;
}
