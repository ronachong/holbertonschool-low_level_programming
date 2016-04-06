/* swap_int(int *a, int *b) takes the pointers
 * to two integers as its parameters and swaps
 * the values of those two integers.
 */

void swap_int(int *a, int *b) {
  int a_value = *a;
  int b_value = *b;
  *a = b_value;
  *b = a_value;
}
