#include <stdlib.h>
#include <string.h>
#include "tree.h"

#include <stdio.h>

/**
 * create_ntnode -
 * @data: string to duplicate and store inside node
 * Description:	create_ntnode creates a new NTree node and returns the pointer
 *	to it. Helper function to ntree_insert.
 */
NTree *create_ntnode(char *data);
/**
 * create_llnode -
 * @new_node: pointer to NTree node which is to be stored as node element of
 * 	List node
 * Description: create_llnode creates a new List node and returns the pointer to
 * 	it. Helper function to ntree_insert.
 */
List *create_llnode(NTree *new_node);
/**
 * find_parent -
 * @tree: pointer to the address of the root node of an n-ary tree. NULL if Tree
 * 	is empty
 * @parents: NULL-terminated array of strings matching str elements of parents
 * 	of node to insert
 * Description: find_parent finds the direct parent for the new node to add in
 * 	@tree. Helper function to ntree_insert.
 */
NTree *find_parent(NTree **tree, char **parents);
/**
 * find_p_in_ll -
 * @linked_list: pointer to linked list of type List containing a parent node
 * 	of a node to be inserted in an n-ary tree of type Tree
 * @datastr: string matching contents of str element of parent node in @linked
 * 	_list.
 * Description: find_p_in_ll finds the parent for the new node to add in the
 * 	linked list.
 */
NTree *find_p_in_ll(List *linked_list, char *datastr);

/**
 * ntree_insert -
 * @tree: pointer to the address of the root node of an n-ary tree. NULL if Tree
 * 	is empty
 * @parents: NULL-terminated array of strings matching str elements of parents
 * 	of node to insert
 * @data:	string to duplicate and store inside node to insert
 * Description: ntree_inserts inserts a node in a tree according to @parents and
 * 	@data
 */
int ntree_insert(NTree **tree, char **parents, char *data)
{
	NTree *new_node;
	List *new_list;
	NTree *parent_node;

	new_node = create_ntnode(data);
	/* if creation failed, return 1 for failure */
	if (new_node == NULL)
		return (1);

	/* else: */
	/* if tree is empty, make tree point to new node */
	if (parents == NULL || parents[0] == NULL)
		*tree = new_node;

  /* if tree is not empty, add node to appropriate linked list */
	else
	{
		new_list = create_llnode(new_node);
		/* if creation failed, return 1 for failure */
		if (new_list == NULL)
			return (1);

		/* if creation did not fail: */
		/* insert new_list into tree */
		parent_node = find_parent(tree, parents);

		if (parent_node->children != NULL)
			new_list->next = parent_node->children;

			parent_node->children = new_list;
	}

	return (0);
}

NTree *create_ntnode(char *data)
{
	NTree *new_node;

	new_node = malloc(sizeof(NTree));
	if (new_node != NULL)
	{
		new_node->str = strdup(data);
		new_node->children = NULL;
	}

	return (new_node);
}

List *create_llnode(NTree *new_node)
{
	List *new_list;

	new_list = malloc(sizeof(List));
	if (new_list != NULL)
	{
		new_list->node = new_node;
		new_list->next = NULL;
	}

	return (new_list);
}

NTree *find_parent(NTree **tree, char **parents)
{
	int i;
	NTree *parent_node;
	List *linked_list;

	/* initialize parent_node as first node in tree */
	parent_node = *tree;
	linked_list = parent_node->children;

  /* initialize iterator at 1 */
	i = 1;

  /* iterate thru tree til last level is reached; locate parent node in each
	 * level
	 */
	while (linked_list != NULL && parents[i] != NULL)
	{
		parent_node = find_p_in_ll(linked_list, parents[i]);
		linked_list = parent_node->children;
		i++;
	}

	return (parent_node);
}

NTree *find_p_in_ll(List *linked_list, char *datastr)
{
	/* iterate thru linked list till parent node in list is reached */
	while (strcmp(linked_list->node->str, datastr) != 0)
	{
		linked_list = linked_list->next;
	}
	return (linked_list->node);
}
