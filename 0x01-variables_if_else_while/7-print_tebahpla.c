#include <stdio.h>
/**
 * main - Entry point
 * Description: print alpahbets in reverse order
 * Return:  0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);

	putchar('\n');
	return (0);
}
