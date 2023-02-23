/**
 * _isupper - Check if uppercase character
 * @c: The character ascii number
 * Return: 1 (uppercase) 0 (lowecase)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
