/**
 * _memcpy - fill memory with a constant byte
 * @dest: array to fill
 * @src: copy from array
 * @n: the number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = -1;

	while (++i != n)
		dest[i] = src[i];
	return (dest);
}
