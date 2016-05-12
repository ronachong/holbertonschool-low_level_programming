#include "header.h"
#define SIZE 2

/*
 * print_prompt prints the prompt for a shell.
 * It returns -1 in case of error, or the number of bytes printed in
 * case of success.
*/

int print_prompt(void)
{
  int byte_return;
  char prompt[SIZE] = "$ ";

  byte_return = write(1, &prompt, SIZE);
  if (byte_return == -1) {
    perror("write(1, &prompt, SIZE)");
  }

  return byte_return;
}
