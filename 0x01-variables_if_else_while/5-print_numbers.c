#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers from 0 to 9 as chars
 * Return:  0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
		putchar(c++);

	putchar('\n');
	return (0);
}
