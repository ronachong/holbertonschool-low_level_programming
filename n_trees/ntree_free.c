#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

void ntree_free(NTree *tree)
{
	NTree *node;
	List *list;
	List *tmp;

	printf("This print works\n.");
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
	list = tree->children;
	free(tree->str);
	free(tree);

	printf("list is %p\n", (void *)list);
	while (list != NULL)
	{
		printf("code to free list node\n");
		node = list->node;
		tmp = list->next;
		free(list);
		ntree_free(node);
		list = tmp;
	}

	return;
}
