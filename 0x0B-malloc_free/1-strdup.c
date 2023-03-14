#include <stdlib.h>
/**
 * _strdup - make a copy of another string
 * @str: string to copy
 * Return: a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ptr;

	if (!str)
		return (NULL);
	while (str[i++])
		;
	ptr = (char *)malloc(i * sizeof(char));

	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
