#include "list.h"
#include <stdlib.h>

/* free_list
   takes in a pointer to the first node in a list;
   stores the addr to the first node in a temporary holder;
   re-assigns the head pointer to the next node in the list;
   uses the stored addr to free the string in the detached node;
   then frees the space for the detached node itself;

   repeating this process to the end of the list.
*/

void free_list(List *list) {
  int i;
  List *ptr_to_node;

  for (i = 0; list != NULL; i++) {
    ptr_to_node = list;
    list = ptr_to_node->next;
    free(ptr_to_node->str);
    free(ptr_to_node);
  }
}
