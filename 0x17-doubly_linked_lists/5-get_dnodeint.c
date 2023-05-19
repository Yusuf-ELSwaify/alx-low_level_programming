#include "lists.h"

/**
 * get_dnodeint_at_index - the nth node of a dlistint_t linked list.
 * @head: the head of double linked list
 * @index: the index of the needed node
 * Return: the nth node of a dlistint_t linked list, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index--)
		head = head->next;
	return (head);
}
