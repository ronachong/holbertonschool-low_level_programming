#include <stdio.h>
#include "tree.h"

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

/*
start node to check at tree (i.e. depth 0)

while path[i] != NULL:
	check if path[i] is in a node at given depth:
		if i/depth is at 0, simply check node->str:
			return 0 if node->str != path[i]
		else check each node in linked list:
			return 0 if none of the nodes have a str == path[i]

	update node to children of current node (increase depth)
	update i

loops were successfully completed (meaning a match for each path[i] was found):
return 1
*/
