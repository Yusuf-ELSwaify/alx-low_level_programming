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
			putchar(i);
			putchar(j);
			if (i == '8')/*at number 89 */
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
