/**
 * rot13 - encodes a string using rot13.
 * @s: the string to encode
 * Return: pointer to encoded s
 */
char *rot13(char *s)
{
	int i = -1, j;

	char rot0[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[++i] != 0)
	{
		j = -1;
		while (rot0[++j])
		{
			if (s[i] == rot0[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
