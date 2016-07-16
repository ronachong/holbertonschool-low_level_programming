void quick_sort(int *, int);
void partition(int *, int, int, int);
void print_array(int *, int);

int main(void)
{
  int array[] = {402, 94111, 98, 12, 1024, 11, 2001, 3, 7777};

  print_array(array, 9);
  quick_sort(array, 9);
  print_array(array, 9);


  
  return (0);
}
