#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: number
 * @index: index of bit
 * Return: the value of a bit at a given index.
 *	If error return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}

