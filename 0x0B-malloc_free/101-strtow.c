#include <stdlib.h>
/**
 * get_word_count - count the words in a string
 * @str: the string
 * Return: the count
 */
int get_word_count(char *str)
{
	while (1)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == 0)
			break;
		while (str[i++] != ' ')
			;
		wi++;
	}
	return (++wi);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: pointer to the words array
 */
char **strtow(char *str)
{
	int i = 0, j = 0, wi = 0, wj = 0;
	char **ptr;

	if (!str || !str[0])
		return (NULL);
	ptr = (char **)malloc(get_word_count(str) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (1)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == 0)
			break;
		j = i;
		while (str[j] != ' ' && str[j] != 0)
			j++;
		ptr[wi] = (char *)malloc((j - i + 1) * sizeof(char));
		if (!ptr[wi])
		{
			while (wi)
				free(ptr[--wi]);
			free(ptr);
			return (NULL);
		}
		wj = 0;
		while (i <= j)
		{
			if (str[i] != ' ')
				ptr[wi][wj++] = str[i];
			while (str[i] == ' ' && i < j)
				i++;
			i++;
		}
		ptr[wi][wj] = '\0';
		wi++;
	}
	ptr[wi] = 0;
	return (ptr);
}
