#include "main.h"
/**
 * rev_string - reverse the string
 * @s: pointer to array of characters
 */
void rev_string(char *s)
{
	int start = 0, end = 0;
	char temp;

	while (s[end] != '\0')
		end++;
	end--;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
