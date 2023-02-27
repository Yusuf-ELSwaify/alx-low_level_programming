#include "main.h"
/**
 * puts_half - prints second half of the string followed by a new line
 * @s: pointer to array of characters
 */
void puts_half(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i /= 2;
	while (s[i] != '\0')
		_putchar(s[i++]);
	_putchar('\n');
}
