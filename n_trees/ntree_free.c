#include <stdlib.h>
#include "tree.h"

void ntree_free(NTree *tree)
{
	NTree *node;
	List *list;
	List *tmp;

	list = NULL;

	/* base condition: tree or subtree is NULL */
	if (tree == NULL)
		return;

	/* base condition: tree/subtree has no children */
	if (tree->children == NULL)
	{
		free(tree->str);
		free(tree);
		return;
	}

	/* else */
	/* free root and all children (recursive call) */

	/* saving children, free root */
	tree->children = list;
	free(tree->str);
	free(tree);

	while (list != NULL)
	{
		node = list->node;
		tmp = list->next;
		free(list);
		ntree_free(node);
		list = tmp;
	}

	return;
}
