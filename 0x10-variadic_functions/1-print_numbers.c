#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers.
 * @separator: string to be printed between numbers
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to print them
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(nums, n);
	while (1)
	{
		printf("%d", va_arg(nums, int));
		if (++i == n)
			break;
		printf("%s", separator ? separator : "");
	}
	putchar('\n');
	va_end(nums);
}
