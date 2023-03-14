#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to a newly allocated space in memory,
 * which contains a copy of the concatination of the two strings.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *ptr;

	while (!s1[i])
		i++;
	while (!s2[j++])
		;
	ptr = (char *)malloc((i + j) * sizeof(char));

	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = 0;
	return (ptr);
}
