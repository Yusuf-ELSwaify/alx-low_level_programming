/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 * Return: pointer to encoded s
 */
char *leet(char *s)
{
	int i = -1;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[++i] != 0)
	{
		for (int j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
	}
	return (s);
}
