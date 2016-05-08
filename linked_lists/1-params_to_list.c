#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* params_to_list takes in a number of arguments /av/,
   creates a list with a node for each string arg,
   and returns the pointer to the first node of the list.
*/

List *params_to_list(int ac, char **av) {
  List *temp_result;

  ac = ac;
  temp_result = NULL;
  printf("The first arg is '%s'. The second arg is %s\n", av[1], av[2]);

  return temp_result;

}
