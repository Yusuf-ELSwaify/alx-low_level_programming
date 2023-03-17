#include <stdlib.h>
#include "main.h"
/**
 * _puts - print the string followed by a new line
 * @str: pointer to array of characters
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}
/**
 * infinite_multiply - multiplies two postive numbers
 * @n1: 1st string
 * @n2: 2nd string
 * @r: the result
 * @size_r: r size
 * Return: the product r if it does not exceed size_r else
 */
char *infinite_multiply(char *n1, char *n2, char *r, int size_r)
{
	int len1 = -1, len2 = -1, i_n1 = 0, i_n2 = 0, i = 0, j;

	while (n1[++len1] != '\0')
		if (n1[len1] < '0' || n1[len1] > '9')
		{
			_puts("Error");
			exit(98);
		}
	while (n2[++len2] != '\0')
		if (n2[len2] < '0' || n2[len2] > '9')
		{
			_puts("Error");
			exit(98);
		}
	if (len1 == 0 || len2 == 0 || size_r < len1 + len2)
		return (0);
	while (i < size_r)
		r[i++] = '0';
	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1_digit = n1[i] - '0';

		i_n2 = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int n2_digit = n2[j] - '0';
			int sum = n1_digit * n2_digit + (r[i_n1 + i_n2] - '0') + carry;

			carry = sum / 10;
			r[i_n1 + i_n2] = (sum % 10) + '0';
			i_n2++;
		}
		if (carry > 0)
			r[i_n1 + i_n2] += carry;
		i_n1++;
	}
	return (r);
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int size_r = 2000, i, j;
	char r[2000];

	if (argc < 3)
	{
		_puts("Error");
		exit(98);
	}
	infinite_multiply(argv[1], argv[2], r, size_r);
	i = size_r - 1;
	while (i > 0 && r[i] == '0')
	{
		r[i] = '\0';
		i--;
	}
	j = 0;
	while (i > j)
	{
		char tmp = r[i];

		r[i] = r[j];
		r[j] = tmp;
		i--;
		j++;
	}
	_puts(r);
	return (0);
}
