#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i = -1, sum = 0;

	while (++i < size)
		sum += *(a + (i * size) + i);
	printf("%d, ", sum);
	sum = 0;
	i = -1;
	while (++i < size)
		sum += *(a + (i * size) + (size - i - 1));
	printf("%d\n", sum);
}
