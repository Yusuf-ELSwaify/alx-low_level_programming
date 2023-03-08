/**
 * wildcmp - Compares two strings, considering wildcard characters
 * @s1: string to be compared
 * @s2: The second string could contain wildcards to compare with
 * Return: 1 (identical) 0 (not identical)
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
	{
		if (!*s1 && *(s2 + 1)  && *s2 == '*')
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	return (0);
}
