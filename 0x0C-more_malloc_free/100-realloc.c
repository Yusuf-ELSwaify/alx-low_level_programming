#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array
 * @nmemb: the number of elements of array
 * @size:size of each element
 * Return: a pointer to a newly allocated space in memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = -1;
	void *new_ptr;

	if (!new_size && !ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if(new_size < old_size)
	{
		free(((char *)ptr) + new_size);
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);
	while (++i < old_size)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	return (new_ptr);
}
