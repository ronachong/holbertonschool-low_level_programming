/*
 * find_length finds and returns the length
 * of the string passed to it.
 */

int find_length(char *s)
{
  int i;
  for (i = 0; s[i] != '\0'; i++);
  return i;
}
