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
		if ((s[i] >= 'a' && s[i] <= 'z')
				|| (s[i] >= 'A' && s[i] <= 'Z'))
		{
			s[i] += 13;
			if (s[i] > 'z')
				s[i] -= 26;
		}
	}
	return (s);
}
