/**
 * _strstr -  function locates the first occurrence in the string haystack
 * of string accept
 * @haystack: string to search in
 * @needle: bytes to accept if the string contain it
 * Return: pointer to the first occurence of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, ii, jj;

	if (!*needle)
		return (haystack);
	while (haystack[i] != 0)
	{
		jj = 0, ii = i;
		while (haystack[ii] && needle[jj] == haystack[ii])
		{
			if (!needle[jj + 1])
				return (haystack + i);
			ii++;
			jj++;
		}
		i++;
	}
	return ('\0');
}
