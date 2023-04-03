#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: pointer to the address of the head node in list
 * @index: index of the node to delete
 * Return: 1(success) -1(fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *del_node;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (index > 1)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
		--index;
	}
	del_node = temp->next;
	temp->next = temp->next->next;
	free(del_node);
	return (1);
}
