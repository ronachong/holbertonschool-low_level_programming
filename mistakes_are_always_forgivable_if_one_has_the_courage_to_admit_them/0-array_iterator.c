/* ultimately array_iterator should loop thru ea
   int in the int array and print said int.

   it gets called in the main file with &action
   as its pointer parameter.
 */

void array_iterator(int *array, int size, void (*action_func)(int)) {
  int i;
  for (i = 0; i < size; i++) { 
    action_func(array[i]);
  }
}


