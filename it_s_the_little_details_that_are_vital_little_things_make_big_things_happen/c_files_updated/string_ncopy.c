int find_nonnull_length2(const char *str);

char *string_ncopy(char *dest, const char *src, int n) {
  int i;
  int s_charlength = find_nonnull_length2(src);

  /* replace chars in dest with chars in src, up to the
   * no. stipulated by n and not exceeding the number of
   * chars in src */
  for (i = 0; i < n; i++) {
    if (i >= s_charlength) {
      dest[i] = '\0';
    } else { 
      dest[i] = src[i];
    }
  }

  return dest;
}

int find_nonnull_length2(const char *str) {
  int index;
  for (index = 0; str[index] != '\0'; index++) {};
  return index;
}


