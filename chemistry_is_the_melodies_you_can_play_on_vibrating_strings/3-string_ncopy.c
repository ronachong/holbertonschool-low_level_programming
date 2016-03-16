/*int find_nonnull_length(char *str);*/
int find_nonnull_length2(const char *str);

char *string_ncopy(char *dest, const char *src, int n) {
  int i;
  /*  int d_charlength = find_nonnull_length(dest);*/
  int s_charlength = find_nonnull_length2(src);
  
  for (i = 0; i < n && i < s_charlength; i++) {
    /*    if (i > s_charlength) {
	dest[i] = '\0';
	} */
    dest[i] = src[i];
    }

  if (n > s_charlength) {
    for (; dest[i] != '\0'; i++) {
      dest[i] = '\0';
    }
  }

  return dest;
}

/*int find_nonnull_length(char *str) {
  int index;
  for (index = 0; str[index] != '\0'; index++) {};
  return index;
  }*/

int find_nonnull_length2(const char *str) {
  int index;
  for (index = 0; str[index] != '\0'; index++) {};
  return index;
}
