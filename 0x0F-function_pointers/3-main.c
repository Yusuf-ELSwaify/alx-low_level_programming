#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	int (*func)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		  && argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != 0)
		printf("Error\n"), exit(99);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
		printf("Error\n"), exit(100);

	func = get_op_func(argv[2]);
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
