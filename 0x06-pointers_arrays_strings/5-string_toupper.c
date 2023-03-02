/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to edit
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	const int diff_between_a_A = ('a' - 'A');
	int i = -1;

	while (s[i++] != 0)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= diff_between_a_A;
	return (s);
}
