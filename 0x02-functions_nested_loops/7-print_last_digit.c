#include "main.h"
/**
 * print_last_digit - get the last digit in a number
 * @n: a number value
 * Return: the last digit in a number
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
