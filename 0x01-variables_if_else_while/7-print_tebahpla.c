#include <stdio.h>
/**
 * main - Entry point
 * Description: print alpahbets in reverse order
 * Return:  0 (Success)
 */
int main(void)
{
	for (char c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
