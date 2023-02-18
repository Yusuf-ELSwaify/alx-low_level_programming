#include <stdio.h>
/**
 * main - Entry point
 * Description: print number from 0 to 9 without using 
 * the datatype char
 * Return:  0 (Success)
 */
int main(void)
{
	for (int c = '0'; c <= '9'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
