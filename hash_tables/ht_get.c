#include "hashtable.h"

/*
 * ht_get takes in the following parameters:
 * 1) a pointer to a hash table @hashtable
 * 2) a string representing a key stored in the hash table, @key
 *
 * ht_get retrieves the index of @key in @hashtable and returns the value corres-
 * ponding to @key within the hash table.
 */
char *ht_get(HashTable *hashtable, const char *key)
{
  int i;
  List *n_ptr;
  char *value;

  /* hash @key to get index, using hash */
  i = hash(key, sizeof(hashtable));
  /* find node in hash table list with @key as key value, using index */
  n_ptr = find_node_in_ht(hashtable, key);
  if (n_ptr == NULL)
    return NULL;
  /* else: */
  /* return corresponding value */
  return n_ptr->value;
}


