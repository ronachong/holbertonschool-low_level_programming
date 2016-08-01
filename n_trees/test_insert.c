#include <stdio.h>
#include "tree.h"

NTree *ntree_insert(NTree **tree, char **parents, char *data);

int main(void)
{
  NTree *tree;
  char **array;
  
  tree = NULL;
  tree = ntree_insert(&tree, NULL, "/");
  printf("%s", tree->str);
  printf("\n");
  printf("%p\n", (void *)(tree->children));

  return (0);
}
