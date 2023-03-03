#include <stdio.h>
/**
 * print_buffer - print a buffer
 * @b: string
 * @size:  bytes of the buffer pointed by b
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	while (i < size)
	{
		printf("%08x:", i);
		j = i;
		while (j - i < 10)
		{

			if (j >= size)
				printf(" %4s", "");
			else if (j + 1 >= size)
				printf(" %02x%2s", b[j], "");
			else
				printf(" %02x%02x", b[j], b[j + 1]);

			j += 2;
		}
		putchar(' ');
		j = i - 1;
		while (++j - i < 10)
			putchar((j < size) ? ' '
					: (b[j] >= 31 && b[j] <= 126) ? b[j] : '.');
		putchar('\n');
		i += 10;
	}

	if (size <= 0)
		printf("\n");
}
