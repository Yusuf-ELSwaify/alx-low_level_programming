/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search in
 * @accept: prefix to measure
 * Return: number of bytes in s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int segment_bytes = 0, i = 0;
	char stop = 0;

	while (*s && !stop)
	{
		i = -1;
		while (1)
		{
			++i;
			if (!accept[i])
			{
				stop = 1;
				break;
			}
			if (accept[i] == *s)
			{	
				segment_bytes++;
				break;
			}
		}
		s++;
	}
	return (segment_bytes);
}
