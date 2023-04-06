#include "main.h"
/**
 * set_bit - set the value of a bit at a given index to 1
 * @n: pointer to a number
 * @index: index of bit to set
 * Return: 1 (Success)
 * 	If error return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

