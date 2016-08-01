#include <stdio.h>
#include "tree.h"

char **string_split(const char *, char);
void free_str_array(char **);

int ntree_insert(NTree **tree, List **linked_list, char **parents, char *data);

int main(void)
{
  NTree *tree;
  List *linked_list;
  char **array;
  
  tree = NULL;
  ntree_insert(&tree, &linked_list, NULL, "/");
  printf("%s", tree->str);
  printf("\n");
  printf("%p\n", (void *)(tree->children));

  ntree_insert(&tree, &linked_list, (array = string_split("/", ' ')), "tmp");
  free_str_array(array);
  printf("%s\n", linked_list->node->str);
  printf("%p\n", (void *)(linked_list->node->children));
  printf("%p\n", (void *)(linked_list->next));

  return (0);
}
