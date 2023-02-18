#include <stdio.h>
/**
 * main - Entry point
 * Description: print hexa-decimal numbers
 * Return:  0 (Success)
 */
int main(void)
{
	for (char c = '0'; c <= 'f'; c++)
	{	
		if(c == '9' + 1)
			c = 'a';
	
		putchar(c);
	}
	putchar('\n');
	return (0);
}
