#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head of double linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
