#include "main.h"
#include <limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);
	putchar('\n');

	i = -98;
	positive_or_negative(i);
	putchar('\n');

	i = 0;
	positive_or_negative(i);
	putchar('\n');

	i = -0;
	positive_or_negative(i);
	putchar('\n');

	i = INT_MIN;
	positive_or_negative(i);
	putchar('\n');

	i = INT_MAX;
	positive_or_negative(i);
	putchar('\n');

	return (0);
}
