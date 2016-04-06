int find_nonnull_length(char *str);
int find_nonnull_length2(const char *str);

char *nconcat_strings(char *dest, const char *src, int n) {
  int i;
  int i2;
  int d_charlength = find_nonnull_length(dest);
  int s_charlength = find_nonnull_length2(src);
 
  /* add chars in src str to dest str, using calc'd lengths */
  for (i = d_charlength, i2 = 0; i2 < n && i2 < d_charlength + s_charlength; i++, i2++) {
    dest[i] = src[i2];
  }

  /* add non-null terminating char - not sure if necessary */
  dest[i] = '\0';
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
