#include "main.h"
/**
 * print_alphabet - print chars from a to z 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0, c;
	while (i++ < 10)
	{	
		c = 'a';

		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
	}
}
