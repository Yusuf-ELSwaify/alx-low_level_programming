#include <stdio.h>
/**
 * main - Entry point
 * Return:  0 (Success)
 */
int main(void)
{
	int i = '0', j, k;

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k++);
				if (i == '7')/*at number 789 */
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
