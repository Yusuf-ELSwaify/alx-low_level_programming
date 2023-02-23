/**
 * _isdigit - Check if the character is a digit
 * @c: The character ascii number
 * Return: 1 (digit) 0 (not a digit)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
