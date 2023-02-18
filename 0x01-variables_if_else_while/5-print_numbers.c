#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers from 0 to 9 as chars
 * Return:  0 (Success)
 */
int main(void)
{
	for (char c = '0'; c <= '9'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
