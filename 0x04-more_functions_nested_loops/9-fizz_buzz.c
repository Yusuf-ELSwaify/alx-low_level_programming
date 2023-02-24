#include <stdio.h>
/**
 * print_number - prints a number character character
 * @num: postive number
 * Return: void
 */
void print_number(int num)
{
	if (num > 9)
		print_number(num / 10);
	putchar('0' + num % 10);
}
/**
 * main - print numbers from 0 to 100 10 if a number
 * multiples 3 print Fizz if five print Buzz if both print FizzBuzz
 * Return: 0 success
 */
int main(void)
{
	int i = 1;

	while (1)
	{
		if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		if (i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if (i % 3 != 0)
		{
			print_number(i);
		}
		if (i++ == 100)
			break;
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
