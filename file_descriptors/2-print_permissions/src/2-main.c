#include "1-header.h"

int main(int argc, char **argv) {
  if (copy_content(argc, argv) == 1) {
    return 0;
  }
  
  /* else */
  return 1;
}
