/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 * Return: pointer to encoded s
 */
char *leet(char *s)
{
	int i = -1, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[++i] != 0)
	{
		j = 0;
		while (j <= 7)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
				s[i] = j + '0';
			j++;
		}
	}
	return (s);
}
