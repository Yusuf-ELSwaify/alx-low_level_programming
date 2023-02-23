#include <stdio.h>
/**
 * sum_of_multiples - calculate the sum of the all the natural number
 * that multiple to the integer multiple and below the integer below
 * @multiple: the number multiplied by
 * @below: number we stoped at
 * Return: the sum of the numbers
 */
int sum_of_multiples(int multiple, int below)
{
	int i = 1, sum = 0;

	while (i * multiple < below)
	{
		sum += i++ * multiple;
	}
	return (sum);
}
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	const int below = 1024;
	int multiple3 = sum_of_multiples(3, below);
	int multiple5 = sum_of_multiples(5, below);
	int multiple_of_both = sum_of_multiples(5 * 3, below);

	printf("%d\n", multiple3 + multiple5 - multiple_of_both);
	return (0);
}
