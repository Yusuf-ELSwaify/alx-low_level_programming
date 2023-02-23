#include "main.h"
/**
 * print_number - prints a number character character
 * @num: postive number
 * Return: void
 */
void print_number(int num)
{
	if (num > 9)
		print_number(num / 10);
	_putchar('0' + num % 10);
}
/**
 * more_numbers - print numbers from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, num = 0;

	while (i++ < 10)
	{	num = 0;
		while (num <= 14)
			print_number(num++);

		_putchar('\n');
	}
}
