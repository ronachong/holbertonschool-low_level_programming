/* what do I want to do?
come up with an operation that multiplies x to value y numbers of time, by calling itself
*/

int power(int x, int y) {
  if (y > 0) {
    return x * power(x, y - 1);
  }
  // else
  return 1;
}
