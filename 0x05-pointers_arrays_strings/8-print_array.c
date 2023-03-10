#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the numbers inside an array
 * @a: pointer to array of numbers
 * @n: the number of numbers
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (n > 0)/*always true if the input > 0 */
	{
		printf("%d", a[i++]);
		if (i == n)
			break;
		printf(", ");
	}
	putchar('\n');
}
