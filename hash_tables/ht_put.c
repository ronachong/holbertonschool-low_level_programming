#include "hashtable.h"

/*
 * ht_put takes in the following three parameters:
 * 1) the pointer @hashtable, pointing to a hash table
 * 2) the string @key, to be hashed
 * 3) the string @value, which is the value corresponding to key
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
  i = hash(key);
  /* create linked list node with @key and @value */
  n_ptr = add_as_head(hashtable->array[i], key, value);
  /* add new node to hash table at index */
  hashtable->array[i] = n_ptr;
  /* return index of key and value pair in hash table */
  return i;
}
