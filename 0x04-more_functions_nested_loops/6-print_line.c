#include "main.h"
/**
 * print_line - print a line with n length
 * @n: the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (++i <= n)
		_putchar('_');
	_putchar('\n');
}
