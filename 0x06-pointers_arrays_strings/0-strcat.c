/**
 * _strcat - concatenates two strings
 * @dest: the string add in it
 * @src: the string copy from it
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++] != 0)
		;
	while (src[j - 1] != 0)
	{
		dest[i++] = src[j++];
	}
	return (dest);
}
