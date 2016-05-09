#include <stdlib.h>
#include "list.h"

int add_node(List **list, char *str);
List *find_node_prior(List *, int);
List *create_new_node(char *content, List*);
char *copy_string(char *);
void print_string(char *);

int insert_in_list(List **list, char *content, int index) {
  List *ptr_to_node_prior;
  List *next_to_assign;
  List *ptr_to_new_node;

  /* handle index parameter less than 0 */
  if (index < 0) {
    return 0;
  }
  
  /* else, if index parameter 0 or list is empty */
  if (index == 0 || *list == NULL) {
    /* simply run add_node to make new node head */
    return add_node(list, content);
  }

  /* ELSE */
  /* find the node prior to node we want to insert */
  ptr_to_node_prior = find_node_prior(*list, index);   

  /* store next value of node prior */
  next_to_assign = ptr_to_node_prior->next;

  /* create node we want to insert, with input string & the next val of the node prior */
  ptr_to_new_node = create_new_node(content, next_to_assign);

  /* change the next val of node prior to pointer of new node */
  ptr_to_node_prior->next = ptr_to_new_node;
}


List *find_node_prior(List *ptr_to_head, int index) {
  int i;
  List *current_node_ptr;

  for (i = 0, current_node_ptr = ptr_to_head; i < index; i++) {
    /* if i is one less than the index of node to insert, we've found
       the node prior; return! */
    if (i == index - 1) {
      return current_node_ptr;
    }
    
    /* else */
    /* update current node to next node */
    current_node_ptr = current_node_ptr->next;
  }

  /* if loop did not succeed... then probably index req'd
     is greater than size of list*/
  return -1; /* ATTN: will want to run add node-2 */
}


List *create_new_node(char *str, List *next_to_assign) {
  struct List *ptr_to_node;

  ptr_to_node = malloc(sizeof(struct List));
  if (ptr_to_node == NULL) {
    return 1;
  }

  ptr_to_node->str = copy_string(str);
  ptr_to_node->next = next_to_assign;

  return ptr_to_node;
}
