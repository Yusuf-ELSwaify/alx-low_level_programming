#include "hash_tables.h"
/**
 * key_index - Get the index at which a key/value pair should
 *		 be stored in array of a hash table.
 * @key: is the key
 * @size: the size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 *	  in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
