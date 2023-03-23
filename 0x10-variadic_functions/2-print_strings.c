#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings.
 * @separator: string to be printed between strings
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to print them
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;

	if (n <= 0)
		printf("\n"), return;

	va_start(strings, n);
	while (1)
	{
		char *s = va_arg(strings, char *);

		printf("%s", (!s ? "(nil)" : s));
		if (++i == n)
			break;
		printf("%s", separator ? separator : "");
	}
	putchar('\n');
	va_end(strings);
}
