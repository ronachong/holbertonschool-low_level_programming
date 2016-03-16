#include <string.h>
#include <stdio.h>

int main(void) {
  char s1[7] = "*******";
  char s2[9] = "123456789";

  strncpy(s1, s2, 9);
  printf("%s", s1);
  return (0);
}

