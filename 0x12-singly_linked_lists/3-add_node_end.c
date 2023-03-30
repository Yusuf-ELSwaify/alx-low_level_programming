#include "lists.h"
#include <string.h>
/**
 * add_node_end - add an element to the end of list
 * @head: pointer to the head node in list
 * @str: the string to added to the new node
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node = malloc(sizeof(list_t));
	int len = 0;

	if (!new_node)
		return (NULL);
	new_str = strdup(str);
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
		len++;
	new_node->len = len;
	new_node->str = new_str;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		list_t *temp;

		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
