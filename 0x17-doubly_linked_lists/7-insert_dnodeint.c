#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: address of the pointer of the head of double linked list
 * @idx: the index to put the new node
 * @n: the value of the new node
 * Return: the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *h;
	if (!*h)
		return (*h = new);
	curr = *h;
	while (curr->next && idx--)
		curr = curr->next;
	new->next = curr->next;
	curr->next = new;
	new->prev = curr;
	return (new);
}
