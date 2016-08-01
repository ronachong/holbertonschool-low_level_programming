#include <stdlib.h>
#include <string.h>
#include "tree.h"

NTree *create_ntnode(char *data);

NTree *ntree_insert(NTree **tree, char **parents, char *data)
{
  NTree *new_node;
  
  new_node = create_ntnode(data);

  return new_node;
}

/**
 * create_ntnode creates a new NTree node and returns the pointer to it.
 */
NTree *create_ntnode(char *data)
{
  NTree *new_node;

  new_node = malloc(sizeof(NTree));
  new_node->str = strdup(data);
  new_node->children = NULL;

  return new_node;
}

/*
make new ntree node:
malloc node and assign pointer to @new_node
assign strdrup(@data) to @new_node->str
assign NULL to @new_node->children

insert @new_node:  
 if @parents is NULL or [NULL]--
 make tree point to @new_node (*tree = &new_node)

 else if @parents is an array of strings up to string_n:
  create new linked list node:
   malloc list and assign pointer to @new_list
   assign @new_node to @new_list->node
   assign NULL to @new_list->next

  find parent node:
   traverse tree till reaching last parent - node with str=string_n
   set last parent node to @parent_node

  insert @new_list:
   if @parent_node has children (@parent_node->children != NULL):
    store @parent_node->children in new_list->next
    
   make @parent_node->children point to @new_node (@parent_node->children = @new_node)
*/
