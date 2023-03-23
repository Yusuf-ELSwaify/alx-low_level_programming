#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcode
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	int bytes, i = 0;
	char *address = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	bytes = atoi(argv[1]);

	if (bytes < 0)
		printf("Error\n"), exit(2);

	while (i < bytes - 1)
		printf("%02hhx ", address[i++]);
	printf("%02hhx\n", address[i++]);
	return (0);
}
