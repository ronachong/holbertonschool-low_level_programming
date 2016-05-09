#include "list.h"

List *find_node_prior(List **, int);
List *create_new_node(char *content, List*);

int insert_in_list(List **list, char *content, int index) {
  List *node_prior_ptr;
  List *next_to_assign;
  List *ptr_to_new_node;

  /* find the node prior to node we want to insert */
  ptr_to_node_prior = find_node_prior(**list, index);

  /* store next value of node prior */
  next_to_assign = node_prior_ptr->next;

  /* create node we want to insert, with input string & the next val of the node prior */
  ptr_to_new_node = create_new_node(content, next_to_assign);

  /* change the next val of node prior to pointer of new node */
  ptr_to_node_prior->next = ptr_to_new_node;
}
