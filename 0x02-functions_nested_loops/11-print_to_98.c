#include "main.h"
/**
  * print_int - print an integer using putchar function
  * @n: a number to print
  * Return: void
  */
void print_int(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10 != 0)
		print_int(n / 10);

	 _putchar('0' + n % 10);

}
/**
 * print_to_98 - prints from any number to 98
 * @n: the number begins from
 * Return: void
 */
void print_to_98(int n)
{
	while (1)
	{
		print_int(n);
		if (n == 98)
			break;
		_putchar(',');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('\n');
}

