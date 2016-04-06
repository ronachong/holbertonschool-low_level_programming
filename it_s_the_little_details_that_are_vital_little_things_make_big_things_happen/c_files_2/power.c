/* what do I want to do?
come up with an operation that multiplies x to value y numbers of time, by calling itself
*/

#include <limits.h>

int power(int x, int y) {
  if (y < 0 || x > INT_MAX/x || x < INT_MIN/x) {
    return -1;
  }
  // else
  if (y > 0) {
    return x * power(x, y - 1);
  }
  // ELSE, y = 0;
  return 1;
}
