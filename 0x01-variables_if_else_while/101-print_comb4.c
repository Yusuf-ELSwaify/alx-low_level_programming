#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return:  0 (Success)
 */
int main(void)
{
	for (char i = '0'; i <= '9'; i++)
	{
		for (char j = i+1; j <= '9'; j++)
		{
			for (char k = j+1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7')/*at number 789 */
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
