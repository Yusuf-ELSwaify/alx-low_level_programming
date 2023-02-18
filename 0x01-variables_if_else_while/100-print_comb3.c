#include <stdio.h>
/**
 * main - Entry point
 * Return:  0 (Success)
 */
int main(void)
{
	int i = '0', j;

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i == '8')/*at number 89 */
				break;
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
