#include "main.h"
/**
 * print_diagonal - draw a diagonal line n size
 * @n: the size of the diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (++i <= n)
	{
		j = 0;
		while (++j < i)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
