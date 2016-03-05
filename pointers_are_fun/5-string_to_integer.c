int string_to_integer(char *s) {
  int length;
  float power = 0.1;
  int index;
  int n = 0;

  /* figure out the length of the array */
  for (length = 0; s[length] != '\0'; length++) {
    power *= 10;
  }

  /* for ea. number in string, multiply by power                                                           
   * and add to n */
  for (index = 0; index = (length - 1); index++) {
    if (s[index] >= '0' && s[index] <= '9') {
      n += (s[index] - 48) * power;
      power /= 10;
    }
  }

  return n;
}
