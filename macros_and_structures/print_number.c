int print_char(char);

void print_number(int n) {
  int original_input;
  int length;

  original_input = n;
  length = 1;

  if (original_input < 9) {
    print_char(n + '0');
    return;
  }

  while (n > 9) {
    n /= 10;
    length++;
  }

  print_char(n + '0');

  for (; length> 1; length--) {
    n *= 10;
  }
  print_number(original_input - n);
}

int main(void) {
  print_number(98);
  return (0);
}
