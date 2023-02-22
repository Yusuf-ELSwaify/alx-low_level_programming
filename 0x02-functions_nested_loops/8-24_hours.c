#include "main.h"
/**
 * print_number - prints minute value or hour value
 * @num: hour or minute value
 * Return: the last digit in a number
 */
void print_number(int num)
{
	_putchar('0' + num / 10);
	_putchar('0' + num % 10);
}
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int h = 0, m;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			print_number(h);
			_putchar(':');
			print_number(m++);
			_putchar('\n');
		}
		h++;
	}
}
