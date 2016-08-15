#include <stdlib.h>
#include "tree.h"

int ntree_insert(NTree **, char **, char *);

void ntree_print(NTree *);
void ntree_free(NTree *);
char **string_split(const char *, char);
void free_str_array(char **);


int main(void)
{
  NTree *tree;
  char **array;

  tree = NULL;
  ntree_insert(&tree, NULL, "/");

  ntree_insert(&tree, (array = string_split("/", ' ')), "tmp");
  free_str_array(array);
  
  ntree_print(tree);
  ntree_free(tree);
  return (0);
}
