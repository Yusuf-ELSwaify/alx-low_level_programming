#include "main.h"
/**
 * _islower - Check if the alphabet char is lowercase
 * Return: 1 (True) 0 (False)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;

	return 0;
}
