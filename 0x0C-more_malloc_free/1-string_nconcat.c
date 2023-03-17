#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the number of bytes taken from s2
 * Return: a pointer to a newly allocated space in memory,
 * which contains the concatination of the two strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *ptr = NULL;

	if (s1)
		while (s1[i])
			i++;
	if (s2)
	{
		while (s2[j++])
			;

		j = n < j ? (n + 1) : j;
	}
	else if (s1)
		i += 1;
	if (i + j)
		ptr = (char *)malloc((i + j + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (s1)
	{
		i = 0;
		while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		j = 0;
		while (s2[j] && j < n)
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
	}
	ptr[i] = 0;
	return (ptr);
}
