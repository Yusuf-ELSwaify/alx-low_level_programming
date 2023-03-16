#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: the number array begin with
 * @max: number array finish with
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));

	if (!ptr)
		return (NULL);
	min--;
	while (min++ <= max)
		ptr[min] = min;
	return (ptr);
}
