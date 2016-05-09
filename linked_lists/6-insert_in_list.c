#include <stdlib.h>
#include "list.h"

int add_node(List **list, char *str);
List *find_node_prior(List *, int);
int add_node_to_end(List **, char *);
int insert_new_node(List *, char *content, List*);
char *copy_string(char *);
void print_string(char *);
struct List *find_end_of_list(struct List **);

int insert_in_list(List **list, char *content, int index) {
  List *ptr_to_node_prior;
  List *next_to_assign;

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
  if (ptr_to_node_prior == NULL) {
    return add_node_to_end(list, content);
  }

  /* store next value of node prior */
  next_to_assign = ptr_to_node_prior->next;

  /* create node we want to insert, with input string & the next val of the node prior, & insert in list */
  return insert_new_node(ptr_to_node_prior, content, next_to_assign);
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
  return NULL; /* ATTN: will want to run add_node_to_end */
}


/* add_node_to_end takes in two inputs, 1) a pointer to the address of the first node in a list, /list/;           
   and 2) a string, /content/, to insert into a new node in the list.                                       
                                                                                                            
   add_node allocates space for a new node in the list, makes the string inside the node a copy of          
   /content/ and makes the /next/ pointer inside the node a pointer to NULL (tail of list).                 
                                                                                                            
   Finally, add_node changes the /next/ pointer of the current tail node of the list to point to            
   the new node, effectively making making the new node the new last node of the list.                      
*/
int add_node_to_end(List **list, char *content) {
  struct List *ptr_to_node;
  struct List *ptr_to_current_tail;

  ptr_to_node = malloc(sizeof(struct List));
  if (ptr_to_node == NULL) {
    return 1;
  }

  ptr_to_node->str = copy_string(content);
  ptr_to_node->next = NULL;

  /* find current tail node in list and make it point to newly-allocated node instead of NULL. */
  ptr_to_current_tail = find_end_of_list(list);
  ptr_to_current_tail->next = ptr_to_node;

  return 0;
}


/* find_end_of_list takes the pointer to the head of a list, /list/,                                        
   and proceeds to the /next/ pointer in each node in the list,                                             
   until it reaches a NULL pointer.                                                                         
                                                                                                            
   It returns the pointer to the current last node in the list.                                             
*/
struct List *find_end_of_list(struct List **list) {
  struct List *ptr_to_node;

  /* initialize ptr to node as ptr to the head of the list */
  ptr_to_node = *list;

  while (ptr_to_node->next != NULL) {
    ptr_to_node = ptr_to_node->next;
  }

  return ptr_to_node;
}


int insert_new_node(List *ptr_to_node_prior, char *str, List *next_to_assign) {
  struct List *ptr_to_node;

  /* allocate space for node */
  ptr_to_node = malloc(sizeof(struct List));
  if (ptr_to_node == NULL) {
    return 1;
  }

  /* assign string and next vals to node */
  ptr_to_node->str = copy_string(str);
  ptr_to_node->next = next_to_assign;

  /* change the next val of node prior to pointer of new node */
  ptr_to_node_prior->next = ptr_to_node;

  return 0;
}
