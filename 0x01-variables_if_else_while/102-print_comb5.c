#include <stdio.h>
/**
 * main - Entry point
 * Return:  0 (Success)
 */
int main(void)
{
	for (char i = '0'; i <= '9'; i++)
	{
		for (char j = '0'; j <= '9'; j++)
		{
			for (char k = i, l= j+1; k <= '9'; k++)
			{
				for (; l <= '9'; l++)
				{	putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8')/*at number 98 */
						break;
					putchar(',');
					putchar(' ');
				}
				l = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
