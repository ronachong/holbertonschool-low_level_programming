#include <stdio.h>
#include <stdlib.h>

int find_num_words(char *s);
char **assign_letters(char *s, int start_position, int current_index, int words_in_array, int *outer_array);

char **string_to_words(char *s) {
  /* init outer array of pointers */
  int *outer_array; /* for some reason, geeksforgeeks exp. does not init as ** - ask Alex? */
  int words_in_array;

  words_in_array = find_num_words(s);
 
  /* allocate memory for outer array */
  outer_array = malloc(sizeof((int *)*words_in_array));
  if (outer_array == NULL) {
    fprintf(stderr, "Not enough memory left!\n");
    free(outer_array);
    return (NULL);
  }

  /* allocate memory for each inner array;
   * assign pointers to inner arrays as elements of outer arrays;
   * and assign word strings to allocated memory for each inner array */
  /* return array of pointers to word strings */
  return assign_letters(s, 0, 0, words_in_array, outer_array);
}


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


char **assign_letters(char *s, int start_position, int current_index, int words_in_array, int *outer_array) {
  int i;
  int j;
  int num_letters;
  
  /* base case: index == words_in_array, i.e. all words have been processed; return array */
  if (current_index == words_in_array) {
    return outer_array;
  }

  /* ELSE */
  /* count chars in current word */
  for (i = start_position, num_letters = 0; s[i] != '\0'; i++) {
    if ((s[i] >= '0' && s[i] <=9) || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
      num_letters++;
    }
    if (s[i+1] < '0' || (s[i+1] > '9' && s[i+1] < 'A') || (s[i+1] > 'Z' && s[i+1] < 'a') || s[i+1] > 'z') {
      break;
    }
  }
  /* allocate memory for chars in word and assign ptr to memory to outer array */
  outer_array[current_index] = malloc(sizeof(char*num_letters));
  if (outer_array[current_index] == NULL) {
    fprintf(stderr, "Malloc for outer_array[current_index] did not work.\n");
    free(outer_array);
  }

  /* assign letters from word in string to allocated mem */
  for (i = start_position; i <= start_position + num_letters; i++) {
    for (j = 0; j <= num_letters; j++) {
      outer_array[current_index][j] == s[i];
    }
  }

  /* recursive call */
  return assign_letters(s, i, current_index + 1, words_in_array, outer_array);
}
