#include <stdio.h>

/* function prints to std. output
   number of arguments passed to it
   from command line, excluding the
   command */

int main(int ac, char **av) {
  av = av; /* resolves unused var error */
  printf("%d\n", ac - 1);
  
  return (0);
}
