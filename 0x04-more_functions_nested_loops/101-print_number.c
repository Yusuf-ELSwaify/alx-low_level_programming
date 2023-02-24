#include "main.h"
/**
 * print_number - prints a number character character
 * @num: postive number
 * Return: void
 */
void print_number(int num)
{	unsigned int unum = num;
	if (num < 0)
	{
		_putchar('-');
		unum = -num;
	}
	if (unum > 9)
		print_number(unum / 10);
	_putchar('0' + unum % 10);
}
