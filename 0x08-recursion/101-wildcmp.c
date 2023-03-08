int wildcmp(char *s1, char *s2);
/**
 * wildcard - check when the string located at wildcard
 * @s1: string
 * @s2: string could contain *
 * Return: 1 if the string end 
 * otherwise pointer to first unmatched character
 */
int wildcard(char *s1, char *s2)
{
	if (!*s1)
		return (1);
	if (*s2 == '*')
		return (wildcard(s1, ++s2));
	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	return (wildcard(++s1, s2));
}
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
	if (!*s1 || !*s2)
		return (0);
	if (*s2 == '*')
		return (wildcard(++s1, ++s2));
	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	return (0);
}
