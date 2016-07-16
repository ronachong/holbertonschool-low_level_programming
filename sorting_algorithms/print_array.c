void printn(int i);
int get_len(int i);
int print_char(char c);

/*
 * print_array takes in an int array, @array, and an int specifying the size of
 * @array, @size, as its parameters.
 * print_array prints the given array.
 */
void print_array(int *array, int size)
{
  int i;

  array = array;
  for (i = 0; i < size - 1; i++) {
    printn(array[i]);
    print_char(',');
    print_char(' ');
  }
  printn(array[i]);
  print_char('\n');
}

/*
 * printn takes in an int @i as its parameter and prints it.
 */
void printn(int i) {
  int j;
  int k;
  int n;
  int n_b4;
  int len;

  len = get_len(i);
  n = i;
  if (i == 0) {
    print_char('0');
    return;
  }

  for (j = 0, k = 1; j < len; j++, k = 1) {
    n_b4 = n;

    /* print 0 if leading digit is 0 */
    if (len - j != get_len(n_b4)) {
      print_char('0');
    }

    else {
      /* reduce to first digit */
      while (n > 9) {
	n /= 10;
	k *= 10;
      }
      /* print digit */
      print_char(n + 48);
      /* revert n to remaining unprinted digits */
      n = n_b4 % (n*k);
    }
  }
}

/* 
 * get_len takes in an int @i as its parameter and returns the length (# of di-
 * gits) of @i.
 */
int get_len(int i) {
  int len;

  len = 1;
  while (i > 9) {
    i /= 10;
    len++;
  }
  return len;
}
