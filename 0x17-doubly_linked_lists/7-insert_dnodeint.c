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
	curr = *h;

	while (curr && --idx)
		curr = curr->next;
	if (!curr)
		return (NULL);
	if (curr->next == NULL)
		return (add_dnodeint_end(&curr, n));

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = curr->next;
	new->prev = curr;
	curr->next->prev = new;
	curr->next = new;
	return (new);
}
