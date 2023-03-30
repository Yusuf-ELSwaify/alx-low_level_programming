#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head node in list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	temp = head;
	while (temp->next)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
