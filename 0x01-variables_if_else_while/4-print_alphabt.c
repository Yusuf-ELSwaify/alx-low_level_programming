#include <stdio.h>
/**
 * main - Entry point
 * Return:  0 (Success)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
