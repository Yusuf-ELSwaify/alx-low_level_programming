#include <stdio.h>
/**
 * _strncat - concatenates two strings at most n bytes from src
 * @dest: the string add in it
 * @src: the string copy from it
 * @n: the max bytes token from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++] != 0)
		;
	i--;
	while (src[j] != 0 && j != n)
		dest[i++] = src[j++];
	return (dest);
}
