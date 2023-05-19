#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all the data of the linkedlist
 * @head: the head of double linked list
 * Return: the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
