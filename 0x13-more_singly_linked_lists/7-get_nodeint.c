#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node of the list
 * @head: pointer to the head node in list
 * @index: index to the returned node
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index)
	{
		head = head->next;
		--index;
	}
	return (head);
}
