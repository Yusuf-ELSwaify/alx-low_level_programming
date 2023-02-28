#include "main.h"
/**
 * add_number - append the character number to the integer number
 * @dest: integer to add in it
 * @number: the character we need to add in the integer
 */
void add_number(unsigned int *dest, char number)
{
	*dest *= 10;
	*dest += number - '0';
}

/**
 * _atoi - turn string to integer
 * @s: pointer to array of character
 * Return: the number
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
			add_number(&number, s[i]);
		else if (number > 0)
			break;
		i++;
	}
	return (number * sign);
}
