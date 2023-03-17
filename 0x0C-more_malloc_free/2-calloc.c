#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array
 * @nmemb: the number of elements of array
 * @size:size of each element
 * Return: a pointer to a newly allocated space in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;

	if (!size || !nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);
	while (i < (nmemb * size))
		((char *)ptr)[i++] = 0;
	return (ptr);
}
