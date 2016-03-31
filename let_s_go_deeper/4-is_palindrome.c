int find_length(char *s, int i);
int check_chars(char *s, int i, int n, int m);

int is_palindrome(char *s) {
  int n;
  int m;
  
  n = find_length(s, 0) - 1;
  if (n % 2 == 0) { /*if length is odd */
    m = n/2;
  } else { /* length is even */
    m = n/2 + 1;
  }
  return check_chars(s, 0, n, m);
}

int find_length(char *s, int i) {
  if (s[i] == '\0') {
    return 0;
  }
  /* else */
  return 1 + find_length(s, i + 1);
}

int check_chars(char *s, int i, int n, int m) {
  if (i == m) { /* basecase: whole string checked, string is palindrome */
    return 1;
  }
  if (s[i] != s[n]) { /* basecase: chars do not match, string not palindrome */
    return 0;
  }
  /* else */
  return check_chars(s, i + 1, n - 1, m);
}
