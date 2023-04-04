#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node in list
 * Return: NULL (no loops) or The address of the node
 * where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (!head || !head->next)
		return (NULL);
	fast = (head->next)->next;
	slow =  head->next;
	while (fast != slow)
	{
		if (!fast || !fast->next || !slow)
			return (NULL);
		slow = slow->next;
		fast = fast->next->next;
	}
	fast = head;
	while (fast != slow)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return (fast);
}
