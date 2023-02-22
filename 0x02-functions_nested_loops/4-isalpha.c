#include "main.h"
/**
 * _isalpha - Check if the character is alphabet
 * @c: The character recieved as an integer
 * Return: 1 (True) 0 (False)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
