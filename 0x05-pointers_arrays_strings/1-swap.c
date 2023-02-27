#include "main.h"
/**
 * swap_int - swap values of two pointers
 * @a: 1st pointer to a number
 * @b: 2nd pointer to a number
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
