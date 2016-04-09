#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char c))(int, int);

int main (int ac, char **av) {
  /* av[1] is the first operand, in string form */
  /* av[2] is the operator, in char form */
  /* av[3] is the second operand, in string form */

  /* let's define the variables we need */
  int first_operand;
  char * operator_string;
  char operator;
  int second_operand;

  int (*func_to_call)(int, int); /* func_to_call is var to hold the pointer we want to use */

  ac++;
  first_operand = atoi(av[1]);
  operator_string = av[2];
  operator = operator_string[0];
  second_operand = atoi(av[3]);

  
  func_to_call = get_op_func(operator); /* we use get_op_func to assign the appropriate pointer to our var */

  if (func_to_call == 0) {
    return 1;
  }

  /* else */
  printf("%d\n", func_to_call(first_operand, second_operand)); /* now we use func_to_call (our pointer) to call our op function */
  return 0;
}
