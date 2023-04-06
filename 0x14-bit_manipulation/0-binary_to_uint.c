#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, b_len = 0, cur_val = 1;

	if (!b)
		return (0);
	while (b[b_len])
		++b_len;
	while (b_len--)
	{
		if (b[b_len] == '1')
			dec += cur_val;
		else if (b[b_len] < '0' || b[b_len] > '1')
			return (0);
		cur_val *= 2;
	}
	return (dec);
}
