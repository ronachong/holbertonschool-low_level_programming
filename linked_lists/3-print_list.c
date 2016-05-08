/* print_every_string_in_list loops thru the list pointed to by                                             
   ptr_to_head_of_list and prints the string in each node */
void print_list(List *list) {
  struct List *ptr_to_node;

  /* initialize ptr to node as ptr to the head of the list */
  ptr_to_node = list;

  while (ptr_to_node->next != NULL) {
    printf("%s\n", ptr_to_node->str);
    ptr_to_node = ptr_to_node->next;
  }

  printf("%s\n", ptr_to_node->str);
}
