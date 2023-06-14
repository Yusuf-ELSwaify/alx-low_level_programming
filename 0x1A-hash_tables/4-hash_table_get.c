#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with a key.
 * @ht: hash table pointer.
 * @key: the key you are looking for.
 * Return: the value associated with key in ht if fail NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index] && strcmp(ht->array[index]->key, key) != 0)
		index++;

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
