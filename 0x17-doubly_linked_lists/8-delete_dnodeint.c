#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index from linked list
 * @head: address of the pointer of the head of double linked list
 * @index: the index to delete the node
 * Return: 1 if success, or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;

	if (*head == NULL)
		return (-1);

	curr = *head;

	while (curr && index--)
		curr = curr->next;
	if (!curr)
		return (-1);

	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	else
		*head = curr->next;

	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
