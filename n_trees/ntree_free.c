#include <stdlib.h>
#include "tree.h"

void ntree_free(NTree *tree)
{
	Ntree *node;
	List *list;
	List *tmp;

	/* base condition: tree or subtree is NULL */
	if (tree == NULL)
		return;

	/* base condition: tree/subtree has no children */
	if (tree->children == NULL)
		return;

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

/* to free for List node
list->node (see "to free for each NTree node)
list->next
list itself
*/

/* to free for each NTree node:
node->str
node->children
node itself
*/

----------------------

/* free tree
while ntnode
free root node using free_ntnode
for each node in children linked lists: free each node using free_ntnode
 */

/* free_ntnode
free node->str
if node->next != NULL:
 */
