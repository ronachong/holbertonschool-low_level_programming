#include <stdio.h>

/* function prints to std. output
   arguments passed to it from command line,
   including the command */

int main(int ac, char **av) {
  int i;

  for (i = 0; i < ac; i ++) {
    printf("%s\n", av[i]);
  }
  
  return (0);
}
