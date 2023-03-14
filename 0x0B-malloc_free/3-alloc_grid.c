#include <stdlib.h>
/**
 * alloc_grid - creates a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));

	if (!ptr)
		return (NULL);
	while (i < height)
	{
		ptr[i] = (int *)calloc(width, sizeof(int));
		if (!ptr[i])
		{
			while (i)
				free(ptr[--i]);
			free(ptr);
			return (NULL);
		}
		i++;
	}
	return (ptr);
}
