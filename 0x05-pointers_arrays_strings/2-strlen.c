#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: pointer to array of characters
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i++] != '\0')
		;
	return (i - 1);
}
