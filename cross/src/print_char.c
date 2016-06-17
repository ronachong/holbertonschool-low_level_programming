#include <unistd.h>

/* 
 *print_char prints the character passed
 * to it.
 */

int print_char(char c)
{
  return (write(1, &c, 1));
}
