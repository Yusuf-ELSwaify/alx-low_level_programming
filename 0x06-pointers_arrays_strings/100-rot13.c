/**
 * rot13 - encodes a string using rot13.
 * @s: the string to encode
 * Return: pointer to encoded s
 */
char *rot13(char *s)
{
	int i = -1, temp;

	while (s[++i] != 0)
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
				|| (s[i] >= 'A' && s[i] <= 'Z'))
		{
			temp = s[i];
			temp += 13;
			if ((temp > 'z') || (temp > 'Z' && temp < 'Z' + 13))
				temp -= 26;
			s[i] = temp;
		}
	}
	return (s);
}
