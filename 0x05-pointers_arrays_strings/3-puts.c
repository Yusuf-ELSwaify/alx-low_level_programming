#include "main.h"
/**
 * _puts - print the string followed by a new line
 * @str: pointer to array of characters
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}
