#include <stdio.h>
int check_if_prime(int n, int m);

int is_prime_number(int n) {
  if (n < 0) { // treat neg. inputs as their positive counterparts
    n *= -1;
  }
  
  if (n == 1) { // 1 is a special case
    return 0;
  }

  // for all other cases
  return check_if_prime(n, 2);
}

int check_if_prime(int n, int m) {
  if (m == n) { // base case: all factors tested, n is prime
    return 1;
  }

  if (n % m == 0) { // base case: n divisible by m, n is not prime
    return 0;
  }

  // else: n is not divisible by m, but there are other factors to test; call again
  return check_if_prime(n, m + 1);
}
