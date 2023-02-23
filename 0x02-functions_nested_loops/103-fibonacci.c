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
		return (0);
	if (num == 2)
		return (2);

	if (fibonnaci_numbers[num - 1] != 0)
		fnum = fibonnaci_numbers[num - 1];
	else
	{
		fnum = fibonacci(num - 1, fibonnaci_numbers);
		if (fnum % 2 != 0)
			fnum = 0;
		fibonnaci_numbers[num - 1] = fnum;
	}
	if (fibonnaci_numbers[num - 2] != 0)
		snum = fibonnaci_numbers[num - 2];
	else
	{
		snum =  fibonacci(num - 2, fibonnaci_numbers);
		if (snum % 2 != 0)
			snum = 0;
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
	int i = 0;

	while (1)
	{
		printf("%ld", fibonacci(++i, fibonnaci_numbers));
		if (i == 50)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
