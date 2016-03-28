#include <limits.h>
#include <stdio.h>
/* what do I want to do?
come up with an operation to multiply n1 by n-1, recursively.
i.e. n * factorial(n-1)
*/

int factorial (int n) {
  if (n == 0) {
    return 1;
  }
  // else
  // check for & handle edge cases
  if ( (n - 1) > (INT_MAX/n) || n < (INT_MIN/n + 1) ) {
    return -1;
  }
  // ELSE
  return n * factorial(n-1);
}
