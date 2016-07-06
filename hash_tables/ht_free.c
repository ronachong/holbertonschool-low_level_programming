#include "hashtable.h"

/*
 * ht_free takes in as its parameter the point to a hashtable @hashtable.
 * ht_free frees all of the strings in each List within the hash table,
 * then the Lists, then the size and array elements of the hash table, then
 * hash table struct itself.
 */
int ht_free(HashTable *hashtable)
{
  int i;

  for (i = 0; i < hashtable->size; i++) {
    /* free node at index */
    /* move on to next node */
    }
  return i;
}
