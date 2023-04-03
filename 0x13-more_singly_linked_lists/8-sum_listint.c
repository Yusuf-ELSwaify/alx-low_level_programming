#include "lists.h"
/**
 * sum_listint - sum the numbers in list
 * @head: pointer to the head node in list
 * Return: the sum of all the numbers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
