#include <stdio.h>
/**
 * reverse_array - reverse an array
 * @a: an array
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
