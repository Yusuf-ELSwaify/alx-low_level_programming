#include <stdio.h>
/**
 * _strpbrk -  function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string to search in
 * @accept: bytes to accept if the string contain any of it
 * Return: pointer to the first occurence
 * of any character of accept in s
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, ii, jj;

	while (haystack[i])
	{
		jj = 0, ii = i;
		while (haystack[ii])
		{
			if (needle[jj] != haystack[ii])
				break;
			if (!needle[jj + 1])
				return (haystack + i);
			ii++;
			jj++;
		}
		i++;
	}
	return (0);
}
