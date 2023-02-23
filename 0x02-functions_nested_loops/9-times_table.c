#include "main.h"
/**
 * print_number - print formated number
 * @num: number to be formated
 * @col: to detect if we in the first column and delete empty spaces
 * Return: void
 */
void print_number(int num, int col)
{
	if (col == 0)
	{
		_putchar('0');
		return;
	}
	_putchar(' ');
	_putchar(num / 10 > 0 ? '0' + num / 10 : ' ');
	_putchar('0' + num % 10);
}
/**
 * times_table - prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int fnum = 0, snum;

	while (fnum <= 9)
	{
		snum = 0;
		while (1)
		{
			print_number(fnum * snum, snum);
			snum++;
			if (snum == 9)
				break;
			_putchar(',');
		}
		_putchar('\n');
		fnum++;

	}
}
