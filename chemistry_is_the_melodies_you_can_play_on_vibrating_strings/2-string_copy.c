int find_nonnull_length2(const char *str);

char *string_copy(char *dest, const char *src) {
  int i;
  int s_charlength = find_nonnull_length2(src);

  for (i = 0; i < s_charlength; i++) {
    dest[i] = src[i];
  }
  return dest;
}

int find_nonnull_length2(const char *str) {
  int index;
  for (index = 0; str[index] != '\0'; index++) {};
  return index;
}
