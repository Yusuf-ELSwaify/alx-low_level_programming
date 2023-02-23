#include "main.h"
/**
 * print_number - print formated number
 * @num: number to be formated
 * @col: the number of column to remove the empty spaces of first column
 * Return: void
 */
void print_number(int num, int col)
{
	int i = 1000;

	if (col == 0)
	{
		_putchar('0' + num);
		return;
	}
	while (i > 0)
	{
		_putchar(num / i != 0 || (num == 0 && i == 1) ? '0' + (num / i) % 10 : ' ');
		i /= 10;
	}
}
/**
 * print_times_table - prints n times table
 * @n: number to print it's time table
 * Return: void
 */
void print_times_table(int n)
{
	int fnum = 0, snum;

	if (n > 15 || n < 0)
		return;

	while (fnum <= n)
	{
		snum = 0;
		while (1)
		{
			print_number(fnum * snum, snum);
			if (snum == n)
				break;
			snum++;
			_putchar(',');
		}
		_putchar('\n');
		fnum++;
	}
}
