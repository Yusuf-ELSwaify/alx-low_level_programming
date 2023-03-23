#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to get their sum
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0, sum = 0;

	va_start(nums, n);
	while (i++ < n)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
