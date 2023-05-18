#include "lists.h"

/**
 * dlistint_len - calculate the number of elements in a linked dlistint_t list.
 * @h: the head of double linked list
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		++n;
	}
	return (n);
}
