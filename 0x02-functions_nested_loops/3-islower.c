#include "main.h"
/**
 * _islower - Check if the alphabet character is lowercase
 * @c: The character recieved as an integer
 * Return: 1 (True) 0 (False)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
