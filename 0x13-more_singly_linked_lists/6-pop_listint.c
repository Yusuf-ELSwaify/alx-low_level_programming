#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the address of the head node in list
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (!*head)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
