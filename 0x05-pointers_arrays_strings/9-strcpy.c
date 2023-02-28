#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy string characters to another string
 * @dest: pointer to array of characters copy in it
 * @src: array we will copy from it
 * Return: the pointer of the destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
