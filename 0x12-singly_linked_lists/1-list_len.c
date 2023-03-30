#include "lists.h"
/**
 * list_len - count the elements of a list_t list
 * @h: pointer to the first node in list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
