/**
 * get_length - get string length
 * @s: string
 * @length: string_length
 * Return: string length
 */
int get_length(char *s, int length)
{
	if (!s[length])
		return (0);
	return (1 + get_length(s, length + 1));
}
/**
 * palindrome - check if string is palindrome
 * @s: string
 * @right: right pointer to check
 * @left: left pointer to check
 * Return: 0 (not palindrome) 1 (palindrome)
 */
int palindrome(char *s, int right, int left)
{
	if (left <= right)
		return (1);
	if (s[right] == s[left])
		return (palindrome(s, right + 1, left - 1));
	return (0);
}
/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: 0 (not palindrome) 1 (palindrome)
 */
int is_palindrome(char *s)
{
	int s_length = get_length(s, 0);

	return (palindrome(s, 0, s_length - 1));
}
