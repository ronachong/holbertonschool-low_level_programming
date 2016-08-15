#include <stdlib.h>
#include "tree.h"

int ntree_insert(NTree **, char **, char *);

void ntree_print(NTree *);
void ntree_free(NTree *);


int main(void)
{
  NTree *tree;

  tree = NULL;
  ntree_insert(&tree, NULL, "/");

  ntree_print(tree);
  ntree_free(tree);
  return (0);
}
