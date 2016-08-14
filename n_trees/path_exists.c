#include <stdio.h>
#include "tree.h"

Ntree *check_list(List *list, char *str)

int path_exists(NTree *tree, char **path)
{
	int i;
	List *list;
	Ntree *node;

	i = 0;

	/* if tree exists, check first node */
	if (tree != NULL && tree->str != path[i])
		return 0;

	/* if the first node matched path[0]: */
	i++;
	list = tree->children;

	while (path[i] != NULL)
	{
		/* check if path[i] is in any node at given depth */
		node = check_list(list, path[i]);
		if (node == NULL)
			return 0;

		/* if match was for path[i] was found: */
		i++;
		list = node->children;
	}

	/* if a match for each string in path was found: */
	return 1;
}

Ntree *check_list(List *list, char *str)
{

	/* traverse list and check each node for match */
	while (list != NULL)
	{
		if (list->node->str == str)
			return list->node;

		/* else */
		list = list->next;
	}

	/* if no match was found in list */
	return NULL;
}
