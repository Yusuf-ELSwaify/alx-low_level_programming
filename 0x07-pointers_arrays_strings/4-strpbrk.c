/**
 * _strpbrk -  function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string to search in
 * @accept: bytes to accept if the string contain any of it
 * Return: pointer to the first occurence
 * of any character of accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = -1;
		while (accept[++i])
			if (accept[i] == *s)
				return (s);
		s++;
	}
	return (0);
}
