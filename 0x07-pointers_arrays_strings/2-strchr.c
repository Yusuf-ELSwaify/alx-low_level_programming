/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to search for
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}
