#include <stdio.h>
#include "tree.h"

int path_exists(NTree *tree, char **path)
{
	int i;
	List *list;

	i = 0;

	/* if tree exists, check first node */
	if (tree != NULL && tree->str != path[i])
		return 0;

	/* else */
	i++;
	list = tree->children;

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
