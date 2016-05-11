#include "2-header.h"

int main(int argc, char **argv) {
  if (print_permissions(argc, argv) == 1) {
    print_char('\n');
    return 0;
  }
  
  /* else */
  return 1;

}
