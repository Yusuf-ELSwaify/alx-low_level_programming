#include "main.h"
/**
 * print_rev - prints the string in reverse followed by a new line
 * @s: pointer to array of characters
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i-- != 0)
		_putchar(s[i]);
	_putchar('\n');
}
