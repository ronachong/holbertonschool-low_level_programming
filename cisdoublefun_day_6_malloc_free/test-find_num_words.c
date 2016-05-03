#include <stdio.h>

int find_num_words(char *s) {
  int i;
  int num_words;

  /* loop thru string and increment up each time a non-alphanum char follows alphanum char */
  for (i = 0; s[i] != '\0'; i++) {
    if ((s[i] >= '0' && s[i] <=9) || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
      if (s[i+1] < '0' || (s[i+1] > '9' && s[i+1] < 'A') || (s[i+1] > 'Z' && s[i+1] < 'a') || s[i+1] > 'z') {
        num_words++;
      }
    }
  }
  return num_words;
}

int main(void) {
  printf("The sentence 'This is a test. #test' has %d words.\n", find_num_words("This is a test. #test"));
  return(0);
}
