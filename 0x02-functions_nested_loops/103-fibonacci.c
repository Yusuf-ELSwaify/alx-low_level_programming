#include <stdio.h>
/**
 * fibonacci - calculate the fibonacci of the number
 * @num: the number
 * @fibonnaci_numbers: array collect in it the calculated
 * fibonacci number to not recalculate it again
 * Return: the fibonnaci of a number
 */
long fibonacci(int num, long fibonnaci_numbers[])
{
	long fnum, snum;

	if (num == 1)
		return (1);
	if (num == 2)
		return (2);

	if (fibonnaci_numbers[num - 1] != 0)
		fnum = fibonnaci_numbers[num - 1];
	else
	{
		fnum = fibonacci(num - 1, fibonnaci_numbers);
		fibonnaci_numbers[num - 1] = fnum;
	}
	if (fibonnaci_numbers[num - 2] != 0)
		snum = fibonnaci_numbers[num - 2];
	else
	{
		snum =  fibonacci(num - 2, fibonnaci_numbers);
		fibonnaci_numbers[num - 2] = snum;
	}
	return (fnum + snum);
}
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	long fibonnaci_numbers[53] = {0};
	int i = 0, sum = 0, current_fib = 0;

	while (1)
	{
		current_fib = fibonacci(++i, fibonnaci_numbers);
		if (current_fib >= 4000000)
			break;
		if ((current_fib & 1) == 0)
			sum += current_fib;
	}
	printf("%d\n", sum);
	return (0);
}
