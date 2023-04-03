#include "lists.h"
/**
 * add_nodeint - add an element to the list
 * @head: pointer to the first node in list
 * @n: the number to be added to the new node
 * Return: pointer to the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(list_t));

	if (!new_head)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
