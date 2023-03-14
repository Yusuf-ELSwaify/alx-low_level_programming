#include <stdlib.h>
/**
 * argstostr - creates a string that contains all the arguments of the program
 * @ac: number of arguments
 * @av: the arguments
 * Return: pointer to the array
 */
char *argstostr(int ac, char **av)
{
	int i = -1, j, l = 0;
	char *ptr;

	if (!av)
		return (NULL);
	while (++i < ac)
	{
		j = 0;
		while (av[i][j++])
			;
		l += j;
	}
	l++;
	ptr = (char *)malloc(l * sizeof(char));

	if (!ptr)
		return (NULL);
	i = -1, l = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[l++] = av[i][j++];
		}
		ptr[l++] = '\n';
	}
	ptr[l] = '\0';
	return (ptr);
}
