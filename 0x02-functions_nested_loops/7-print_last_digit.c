#include "main.h"
/**
 * print_last_digit - get the last digit in a number
 * @n: a number value
 * Return: the last digit in a number
 */
int print_last_digit(int n)
{
	int remainder = (n < 0 ? -n : n) % 10; 
	_putchar('0' + remainder);
	return (remainder);
}
