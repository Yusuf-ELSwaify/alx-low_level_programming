#include "main.h"
/**
 * print_last_digit - get the last digit in a number
 * @n: a number value
 * Return: the last digit in a number
 */
int print_last_digit(int n)
{
	int remainder = n % 10;

	remainder = remainder < 0 ? -remainder : remainder;
	_putchar('0' + remainder);
	return (remainder);
}
