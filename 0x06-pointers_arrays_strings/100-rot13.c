/**
 * rot13 - encodes a string using rot13.
 * @s: the string to encode
 * Return: pointer to encoded s
 */
char *rot13(char *s)
{
	int i = -1;

	while (s[++i] != 0)
	{
		if ((s[i] >= 'a' && s[i] <= 'z' - 13)
				|| (s[i] >= 'A' && s[i] <= 'Z' - 13))
			s[i] += 13;
		else if ((s[i] > 'z' - 13 && s[i] <= 'z')
				|| (s[i] > 'Z' - 13 && s[i] <= 'Z'))
			s[i] -= 13;
	}
	return (s);
}
