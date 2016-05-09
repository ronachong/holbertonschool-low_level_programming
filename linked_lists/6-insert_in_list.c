#include <stdlib.h>
#include "list.h"

int add_node(List **list, char *str);
List *find_node_prior(List *, int);
int insert_new_node(List *, char *content, List*);
char *copy_string(char *);
void print_string(char *);

int insert_in_list(List **list, char *content, int index) {
  List *ptr_to_node_prior;
  List *next_to_assign;

  print_string("\n");

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

  /* if index req'd greater than size of list */
  if (ptr_to_node_prior == NULL) {
    print_string("I see that return for find_node_prior was NULL.\n");
    /* make next val for new node NULL (make new node equivalent to tail of list) */
    next_to_assign = NULL;
    print_string("next_to_assign val should be null.\n");
  } else {
    print_string("I don't see that return for find_node_prior was NULL.\n");
    /* store next value of node prior */
    next_to_assign = ptr_to_node_prior->next;
  }

  /* create node we want to insert, with input string & the next val of the node prior, & insert in list */
  return insert_new_node(ptr_to_node_prior, content, next_to_assign);
}


List *find_node_prior(List *ptr_to_head, int index) {
  int i;
  List *current_node_ptr;

  for (i = 0, current_node_ptr = ptr_to_head; i < index && current_node_ptr->next != NULL; i++) {
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
  print_string("Think the index was greater than length of list.\n");
  return NULL;
}


int insert_new_node(List *ptr_to_node_prior, char *str, List *next_to_assign) {
  struct List *ptr_to_node;
  print_string("insert_new_node running.\n");

  /* allocate space for node */
  ptr_to_node = malloc(sizeof(struct List));
  if (ptr_to_node == NULL) {
    print_string("malloc for new node failed.\n");
    return 1;
  }

  /* assign string and next vals to node */
  ptr_to_node->str = copy_string(str);
  print_string(ptr_to_node->str);
  print_string(" is the string in new node.\n");
  ptr_to_node->next = next_to_assign;

  /* change the next val of node prior to pointer of new node */
  ptr_to_node_prior->next = ptr_to_node;
  print_string(ptr_to_node_prior->str);
  print_string(" is the string in node prior.\n");

  return 0;
}
