#include "main.h"
/**
 * print_triangle - draw a triangle of size n
 * @n: the size of the triangle
 * Return: void
 */
void print_triangle(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (++i <= n)
	{
		j = n;
		while (j-- > i)
			_putchar(' ');

		while (j-- >= 0)
			_putchar('#');
		_putchar('\n');
	}
}
