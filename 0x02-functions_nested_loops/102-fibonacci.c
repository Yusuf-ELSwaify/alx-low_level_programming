#include <stdio.h>
/**
 * fibonacci - calculate the fibonacci of the number
 * @num: the number
 * Return: the fibonnaci of a number
 */
int fibonacci(int num)
{
	if (num == 1)
		return 1;
	if (num == 2)
		return 2;

	return fibonacci(num - 1) + fibonacci(num - 2);
}
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	while (i < 52)
		printf("%d\n", fibonacci(++i));
	return (0);
}
