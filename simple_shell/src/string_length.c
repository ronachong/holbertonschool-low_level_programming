/*
 * string_length loops through a string and returns the length of the string */

int string_length(char *s)
{
  int i;
  for (i = 0; s[i] != '\0'; i++);
  return i;
}
