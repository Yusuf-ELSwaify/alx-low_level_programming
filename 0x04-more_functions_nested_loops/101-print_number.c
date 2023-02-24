#include "main.h"
/**
 * print_number - prints a number character character
 * @num: postive number
 * Return: void
 */
void print_number(int num)
{
	if (num < 0)
	{
		print_number(-n);
		return;
	}
	if (num > 9)
		print_number(num / 10);
	_putchar('0' + num % 10);
}
