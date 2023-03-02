#include <stdio.h>
/**
 * _strncpy - concatenates two strings and fill n bytes from src or by 0
 * @dest: the string add in it
 * @src: the string copy from it
 * @n: dest max bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != 0 && i != n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}
