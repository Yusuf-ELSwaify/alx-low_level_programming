#include "lists.h"
#include <stdio.h>
/**
 * get_looped_len - finds the loop in a linked list
 * @head: pointer to the first node in list
 * Return: The number of nodes.
 */
int get_looped_len(const listint_t *head)
{
	const listint_t *fast, *slow;
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
 * print_listint_safe - Prints a list safe
 * @head: pointer to the first node in list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = get_looped_len(head);
	if (!n)
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	else
	{
		while (i < n)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			++i;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
