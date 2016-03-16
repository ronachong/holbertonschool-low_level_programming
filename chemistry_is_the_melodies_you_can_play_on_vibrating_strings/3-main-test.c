#include <string.h>
#include <stdio.h>

int main(void) {
  char s1[9] = "*********";
  char s2[7] = "1234567";

  strncpy(s1, s2, 9);
  printf("%s", s1);
  return (0);
}

