int print_char(char c);

/*
 * print_array takes in a char array, @array, and prints the given array.
 */

void print_array(char *array)
{
  int i;
  for (i = 0; array[i] !='\0'; i++)
    print_char(array[i]);
}
