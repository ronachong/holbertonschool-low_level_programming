int print_char(char);

void print_number(int n) {
  int length;

  length = 1;
  while (n > 9) {
    n /= 10;
    length++;
  }

  print_char(n + '0');

  for (; length> 1; length--) {
    n *= 10;
  }
  print_number(n);
}

int main(void) {
  print_number(98);
  return (0);
}
