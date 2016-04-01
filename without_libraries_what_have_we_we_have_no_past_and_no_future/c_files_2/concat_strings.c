int find_nonnull_length(char *str);
int find_nonnull_length2(const char *str);

char *concat_strings(char *dest, const char *src) {
  int i;
  int i2;
  int d_charlength = find_nonnull_length(dest);
  int s_charlength = find_nonnull_length2(src);
 
  /* add chars in src str to dest str, using calc'd lengths */
  for (i = d_charlength, i2 = 0; i2 <= s_charlength; i++, i2++) {
    dest[i] = src[i2];
  }
  return dest;
}

int find_nonnull_length(char *str) {
  int index;
  for (index = 0; str[index] != '\0'; index++) {};
  return index;
}

int find_nonnull_length2(const char *str) {
  int index;
  for (index = 0; str[index] != '\0'; index++) {};
  return index;
}
