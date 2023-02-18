#include <stdio.h>
/**
 * main - Entry point
 * Return:  0 (Success)
 */
int main(void)
{
	int i = '0', j, k, l;

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i, l = j + 1;
			while (k <= '9')
			{
				while (l <= '9')
				{	putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l++);
					if (i == '9' && j == '8')/*at number 98 */
						break;
					putchar(',');
					putchar(' ');
				}
				l = '0';
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
