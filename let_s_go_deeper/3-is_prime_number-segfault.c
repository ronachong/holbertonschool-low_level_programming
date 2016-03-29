#include <stdio.h>
int check_if_prime(int n, int m);
int check_m_by_p(int n, int m, int p);

int is_prime_number(int n) {
  if (n < 0) {
    n *= -1;
  }
  
  if (n == 1) {
    return 0;
  }

  //else
  return check_if_prime(n, n/2);
}

int check_if_prime(int n, int m) {
  if (m == 1) {
    return 1;
  }

  // else
  return check_m_by_p(n, m, m);
}

int check_m_by_p(int n, int m, int p) {
  //printf("checking m by p, m is %d, p is %d\n", m, p);
  if (p == 1) {
    return check_if_prime (n, m - 1);
  }

  // else
  if (n / m == p) {
    //printf("checking m by p\n");
    if (m * p == n) {
      return 0;
    }
  }

  // ELSE
  return check_m_by_p(n, m, p - 1);
}
