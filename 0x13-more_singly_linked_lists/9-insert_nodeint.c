#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the address of the head node in list
 * @idx: index of the new node
 * @n: the value of the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!idx)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (idx)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		--idx;
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
