#include "hash_tables.h"
#include "stdio.h"


/**
 * hash_table_print - Prints the hash table.
 * @ht: A pointer to the hash table needed to print.
 */
void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i = 0;
	char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
