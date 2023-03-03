/**
 * infinite_add - adds two numbers
 * @n1: 1st string
 * @n2: 2nd string
 * @r: the result
 * @size_r: r size
 * Return: the sum r if it not exceed size_r else 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 1, len1 = 0, len2 = 0, carry = 0, max_length;

	while (n1[len1++] != '\0')
		;
	while (n2[len2++] != '\0')
		;
	max_length = len1 > len2 ? len1 : len2;

	if (max_length > size_r - 1)
		return (0);

	r[max_length] = '\0';

	while (i <= max_length)
	{
		int digit1 = (i <= len1) ? (n1[len1 - i] - '0') : 0;
		int digit2 = (i <= len2) ? (n2[len2 - i] - '0') : 0;
		int sum = digit1 + digit2 + carry;
		int digit_sum = sum % 10;

		carry = sum / 10;
		r[max_length - i] = digit_sum + '0';
		i++;
	}
	if (carry > 0)
	{
		if (max_length + 1 > size_r)
			return (0);
		i = max_length + 1;
		while (i > 0)
		{
			r[i] = r[i - 1];
			i--;
		}
		r[0] = carry + '0';
	}
	return (r);
}
