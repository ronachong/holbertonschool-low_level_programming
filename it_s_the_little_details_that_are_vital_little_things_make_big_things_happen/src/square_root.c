int look_for_root(int n, int m);

int square_root(int n) {
  if (n < 0) {
    return -1;
  }
  
  // else
  return look_for_root(n, n);
}

int look_for_root(int n, int m) {
  if (m == 0 && n != 0) { // base case 1: no natural sq. root
    return -1;
  }

  if (m * m == n) { // base case 2: sq. root reached
    return m;
  }

  // else
  return look_for_root(n, m - 1); // recursive call
}
