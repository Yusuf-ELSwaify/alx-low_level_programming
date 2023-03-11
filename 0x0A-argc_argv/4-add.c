#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argumens count
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		int temp = atoi(argv[i]);

		if (temp == 0 && argv[i][0] != '0' && argv[i][1] == '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += temp;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
