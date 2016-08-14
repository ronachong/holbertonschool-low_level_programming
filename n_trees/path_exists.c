#include <stdio.h>
#include <string.h>
#include "tree.h"

Ntree *check_list(List *list, char *str);

/**
 * path_exists -
 * @tree: address of the root node of an N-ary tree
 * @path: array of string representing a path
 * Description: checks if the N-ary tree @tree contains the given path,
 * @path.
 */
int path_exists(NTree *tree, char **path)
{
	int i;
	List *list;
	Ntree *node;

	i = 0;

	/* if tree exists, check first node */
	if (tree != NULL && strcmp(tree->str, path[i]) == 0)
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

/**
 * check_list -
 * @list: address of the root of a List in an N-ary tree
 * @pathstr: string
 * Description: check_list checks @list to see if any node within it contains
 * contains the string @pathstr.
 */
Ntree *check_list(List *list, char *pathstr)
{
	/* traverse list and check each node for match */
	while (list != NULL)
	{
		if (strcmp(list->node->str, pathstr) == 0)
			return list->node;

		/* else */
		list = list->next;
	}

	/* if no match was found in list */
	return NULL;
}
