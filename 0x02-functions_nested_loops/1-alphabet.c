#include "main.h"
/**
 * print_alphabet - print chars from a to z
 * Return: void
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c != 'z' + 1)
		_putchar(c++);
	_putchar('\n');
}
