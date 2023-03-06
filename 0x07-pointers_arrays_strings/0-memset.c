/**
 * _memset - fill memory with a constant byte
 * @s: array to fill
 * @b: byte to fill array by
 * @n: the number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
		s[i++] = b;
	return (s);
}
