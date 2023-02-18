#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers from 0 to 9 with commas after every number
 * Return:  0 (Success)
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c++);
		if (c > '9')
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
