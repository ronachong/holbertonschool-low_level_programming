/* what do I want to do?
come up with an operation to multiply n1 by n-1, recursively.
i.e. n * factorial(n-1)
*/

int factorial (int n) {
  if (n > 0) {
    return n * factorial(n-1);
  }
  return 1;
}
