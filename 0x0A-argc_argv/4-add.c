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
	int i = 1, sum = 0, j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
