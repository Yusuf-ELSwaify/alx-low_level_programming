#include "main.h"
/**
 * print_diagonal - draw a square size n
 * @n: the size of the square
 * Return: void
 */
void print_square(int n)
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
		while (++j <= n)
			_putchar('#');
		_putchar('\n');
	}
}
