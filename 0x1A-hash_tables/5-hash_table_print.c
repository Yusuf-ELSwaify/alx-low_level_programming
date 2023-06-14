#include "hash_tables.h"
#include "stdio.h"


/**
 * hash_table_print - Prints the hash table.
 * @ht: A pointer to the hash table needed to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i = 0;
	char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				if (flag)
					printf(", ");
				else
					flag = 1;

				printf("'%s': '%s'", curr->key, curr->value);
				curr = curr->next;
			}
		}
		i++;
	}
	printf("}\n");
}
