#include "hash_tables.h"

/**
 * hash_table_delete - free the memory reserved by the hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				temp = curr->next;
				free(curr->key);
				free(curr->value);
				free(curr);
				curr = temp;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
