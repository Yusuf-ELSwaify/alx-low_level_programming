/**
 * cap_string - capitalizes all words of a string
 * @s: the string to edit
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	const int diff_between_a_A = ('a' - 'A');
	int i = -1;

	while (s[++i] != 0)
	{
		while (s[i] < 'a' || s[i] > 'z')
			++i;
		if (s[i - 1] == ' ' ||
		s[i - 1] == '\t' ||
		s[i - 1] == '\n' ||
		s[i - 1] == ',' ||
		s[i - 1] == ';' ||
		s[i - 1] == '.' ||
		s[i - 1] == '!' ||
		s[i - 1] == '?' ||
		s[i - 1] == '"' ||
		s[i - 1] == '(' ||
		s[i - 1] == ')' ||
		s[i - 1] == '{' ||
		s[i - 1] == '}' ||
		i == 0)
			s[i] -= diff_between_a_A;
	}
	return (s);
}
