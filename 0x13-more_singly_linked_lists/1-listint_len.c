#include "lists.h"
/**
 * listint_len - count the elements of a listint_t list
 * @h: pointer to the first node in list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
