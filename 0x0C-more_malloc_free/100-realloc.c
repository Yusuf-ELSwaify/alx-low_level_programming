#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: the old pointer
 * @old_size: memory old size
 * @new_size: the new size to be allocated
 * Return: a pointer to a newly allocated space in memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = -1;
	void *new_ptr;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr && new_size <= old_size)
		return (ptr);
	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);
	while (ptr && ++i < old_size)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}
