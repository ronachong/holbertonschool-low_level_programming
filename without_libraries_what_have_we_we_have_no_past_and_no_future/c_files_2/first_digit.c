/* first_digit(n) returns the first digit
 * of an integer input. */

int first_digit(int n) {
  if (n == -2147483648) {
    return (2);
  }

  else {
    if (n < 0) {
      n *= -1;
    }

    while (n > 9) {
      n /= 10;
    }

    return(n);
  }

}
