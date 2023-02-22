#include "main.h"
/**
 * print_sign - Check the +ve and -ve values
 * @n: +ve, -ve or zero integer value
 * Return: 1 (Postive) -1 (Negative) 0 (Zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
