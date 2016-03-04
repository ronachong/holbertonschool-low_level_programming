#include <stdio.h>

int main(void)
{
  int n;

  /* using sizeof to determine size of types char, int and float */
  printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
  printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
  printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
  printf("Size of type of my variable n on my computer: %lu btyes\n", sizeof(n));
  return (0);
}
