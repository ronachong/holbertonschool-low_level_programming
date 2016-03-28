#include <limits.h>
/* what do I want to do?
come up with an operation to multiply n1 by n-1, recursively.
i.e. n * factorial(n-1)
*/

int factorial (int n) {
  int f_value = 0;
  if (n > 0) {
    f_value = n * factorial(n-1);
    return f_value;
  }  
  if (f_value == INT_MIN || f_value == INT_MAX) {
    return -1;
  }
  //else
  return 1;
}
