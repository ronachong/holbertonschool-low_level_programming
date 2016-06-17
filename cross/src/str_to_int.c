#include "header.h"

/*
 * str_to_int converts the string passed
 * to it to its integer counterpart.
 * if a non-integer or negative integer character is
 * passed to it, str_to_int returns -1 to signify im-
 * proper input.
 */

int str_to_int(char *s)
{
  int i;
  int length;
  int d;
  int i2rtn;

  length = find_length(s);
  i2rtn = 0;

  for (i = 0; s[i] != '\0'; i++) {
    /* check for proper input */
    if (s[i] < 48 || s[i] > 57) {
      return -1;
    }
    /* take s[i] and convert to its decimal counterpart */
    d = s[i] - 48;
    /* take the decimal counterpart and convert it
     *  to the number of places it should have */
    d = dec_to_int(d, length);
    length--;
    /* add to i2rtn */
    i2rtn += d;
  }

  return i2rtn;
}


/*
 * dec_to_int takes a given decimal number, dec,
 * converts it to an corresponding integer with
 * n_places, and returns the integer.
 */

int dec_to_int(int dec, int n_places) {
  int i;

  for (i = n_places; i != 1; i--) {
    dec *= 10;
  }

  return dec;
}
