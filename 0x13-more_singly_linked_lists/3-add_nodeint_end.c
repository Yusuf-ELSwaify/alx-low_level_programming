#include "lists.h"
/**
 * add_nodeint_end - add an element to the end of list
 * @head: pointer to the head node in list
 * @n: the number to be added to the new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		listint_t *temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
