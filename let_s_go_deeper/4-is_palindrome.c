int find_length(char *s, int i);

int is_palindrome(char *s) {
  int n;
  
  n = find_length(s, 0) - 1;
  return n;
}

int find_length(char *s, int i) {
  if (s[i] == '\0') {
    return 0;
  }

  // else
  return 1 + find_length(s, i + 1);
}
