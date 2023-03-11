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
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0, coins_number = 0, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	while (amount > 0)
	{
		int coins_needed = amount / coins[i];

		coins_number += coins_needed;
		amount -= coins_needed * coins[i];
		i++;
	}
	printf("%d\n", coins_number);
	return (0);
}
