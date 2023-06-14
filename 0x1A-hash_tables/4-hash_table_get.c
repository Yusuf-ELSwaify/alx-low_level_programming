#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_get - Retrieve the value associated with a key.
 * @ht: hash table pointer.
 * @key: the key you are looking for.
 * Return: the value associated with key in ht if fail NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr && strcmp(curr->key, key) != 0)
		curr = curr->next;
	if (curr == NULL)
		return (NULL);

	return (curr->value);
}
