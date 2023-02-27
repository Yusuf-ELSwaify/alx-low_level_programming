#include "main.h"
/**
 * puts2 - prints the even character in the string followed by a new line
 * @str: pointer to array of characters
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
		if (str[i - 1] == '\0')
			break;
	}
	_putchar('\n');
}
