#include <stdio.h>
/**
 * main - check the code
 * @argc: argumens count
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
