#include <stdio.h>

int find_letters_in_selected_word(char *s, int start_position) {
  int i;
  int num_letters;

  /* loop thru string and increment up for each letter */
  for (i = start_position, num_letters = 0; s[i] != '\0'; i++) {
    if ((s[i] >= '0' && s[i] <=9) || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
      num_letters++;
      printf("The letter just counted is %c\n", s[i]);
      printf("num_letters so far is %d\n", num_letters);
    }
    if (s[i+1] < '0' || (s[i+1] > '9' && s[i+1] < 'A') || (s[i+1] > 'Z' && s[i+1] < 'a') || s[i+1] > 'z') {
      break;
    }
  }
  return num_letters;
}

int main(void) {
  printf("The first word in 'This is a test. #test' has %d letters.\n", find_letters_in_selected_word("This is a test. #test", 0));
  printf("The second word in 'This is a test. #test' has %d letters.\n", find_letters_in_selected_word("This is a test. #test", 4));

  return(0);
}
