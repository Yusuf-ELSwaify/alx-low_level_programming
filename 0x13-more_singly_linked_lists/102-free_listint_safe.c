#include "lists.h"
/**
 * get_looped_count - finds the loop in a linked list
 * @head: pointer to the first node in list
 * Return: The number of nodes.
 */
int get_looped_count(listint_t *head)
{
	listint_t *fast, *slow;
	int count = 1;

	if (!head || !head->next)
		return (0);
	fast = (head->next)->next;
	slow =  head->next;
	while (fast != slow)
	{
		if (!fast || !fast->next || !slow)
			return (0);
		slow = slow->next;
		fast = fast->next->next;
	}
	fast = head;
	while (fast != slow)
	{
		++count;
		fast = fast->next;
		slow = slow->next;
	}
	slow = slow->next;
	while (fast != slow)
	{
		++count;
		slow = slow->next;
	}
	return (count);
}
/**
 * free_listint_safe - Free the list safe
 * @h: pointer to the address of the first node in list
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t n, i = 0;

	n = get_looped_count(*h);
	if (!n)
		while (*h)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	else
	{
		while (i < n)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			++i;
		}
		*h = NULL;
	}
	h = NULL;
	return (n);
}
