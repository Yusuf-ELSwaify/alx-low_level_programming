#include <stdio.h>
/**
 * main - Entry point
 * Description: print hexa-decimal numbers
 * Return:  0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		if (c == '9' + 1)
			c = 'a';
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
