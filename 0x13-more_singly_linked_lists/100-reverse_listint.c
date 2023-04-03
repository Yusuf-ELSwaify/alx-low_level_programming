#include "lists.h"
/**
 * reverse_listint - revers all the elements of a listint_t list
 * @cur: pointer to the first node in list
 * Return: reversed list cur
 */
listint_t *reverse_listint(listint_t **cur)
{
	listint_t *cur_next, *before = NULL;

	if (!cur || !*cur)
		return (NULL);
	while ((*cur)->next)
	{
		cur_next = (*cur)->next;
		(*cur)->next = before;
		before = *cur;
		*cur = cur_next;
	}
	(*cur)->next = before;
	return (*cur);
}
