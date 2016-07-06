#include "hashtable.h"
#include <stdlib.h>
#include <string.h>

List *add_as_head(List *l_ptr, const char *key, const char *value);

/*
 * ht_put takes in the following three parameters:
 * 1) the pointer @hashtable, pointing to a hash table
 * 2) the string @key, to be hashed
 * 3) the string @value, which is the value corresponding to @key
 *
 * ht_put hashes @key, creates and adds a linked list node containing @key and
 * @value to the hash table pointed to by @hashtable, and returns an integer
 * representing the index of the key and value pair in the hash table.
 */

int ht_put(HashTable *hashtable, const char *key, const char *value)
{
  int i;
  List *n_ptr;
  
  /* hash @key and get index, using hash */
  i = hash(key,  sizeof(hashtable));
  /* create linked list node with @key and @value */
  n_ptr = add_as_head(hashtable->array[i], key, value);
  /* if mem alloc failed */
  if (n_ptr == NULL) {
    return 1;
  }
  /* else: */
  /* add new node to hash table at index */
  hashtable->array[i] = n_ptr;
  /* return index of key and value pair in hash table */
  return i;
}


/*
 * add_as_head takes in the following inputs:
 * 1) the pointer to the head of a list in a hash table, @l_ptr
 * 2) the string @key
 * 3) the string @value, which is the value corresponding to @key
 *
 * add_as_head creates a new List node with a copy of @key as its key element,
 * a cpopy of @value as its value element, and the former head of the list
 * pointed to by @l_ptr as its next element.
 * finally, add_as_head returns the pointer to the new node.
 */
List *add_as_head(List *l_ptr, const char *key, const char *value)
{
  List *n_ptr;

  /* create List node using malloc */
  n_ptr = malloc(sizeof(List));
  if (n_ptr == NULL) {
    return NULL;
  }
  /* assign key value using strdup */
  n_ptr->key = strdup(key);
  /* assign value value using strdup */
  n_ptr->value = strdup(value);
  if (n_ptr->key == NULL || n_ptr->value == NULL) {
    return NULL;
  }
  /* assign next value using @l_ptr */
  n_ptr->next = l_ptr;
  /* return pointer to List node */
  return n_ptr;
}
