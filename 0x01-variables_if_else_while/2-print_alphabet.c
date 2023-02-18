#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabets
 * Return:  0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);

	putchar('\n');
	return (0);
}
