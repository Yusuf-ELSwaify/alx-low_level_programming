#include "lists.h"
#include <string.h>
/**
 * add_node - add an element to the list
 * @head: pointer to the first node in list
 * @str: the string to added to the new node
 * Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_head = malloc(sizeof(list_t));
	int len = 0;

	if (!new_head)
		return (NULL);
	new_str = strdup(str);
	if (!new_str)
	{
		free(new_head);
		return (NULL);
	}
	while (str[len])
		len++;
	new_head->len = len;
	new_head->str = new_str;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
