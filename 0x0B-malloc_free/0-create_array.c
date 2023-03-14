#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * size: the size of the array
 * c: character to fill the array with
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (!ptr || !size)
		return (NULL);
	while (i < size)
		ptr[i++] = c;
	return (ptr);
}
