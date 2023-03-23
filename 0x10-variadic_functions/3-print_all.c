#include <stdarg.h>
#include <stdio.h>
/**
 * struct Ftype - Struct op
 * @c: Parameter
 * @f: The function associated
 */
typedef struct Ftype
{
	char tc;
	void (*f)(va_list);
} ftype;
/**
 * tchar - prints the char variadic argument
 * @list: variadic list
 */
void tchar(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * tint - prints the int variadic argument
 * @list: variadic list
 */
void tint(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * tfloat - prints the float variadic argument
 * @list: variadic list
 */
void tfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * tstring - prints the string variadic argument
 * @list: variadic list
 */
void tstring(va_list list)
{
	char *s = va_arg(list, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * @...: variable number of parameters to print them
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = -1, j;
	char *separator = "";
	ftype farray[] = {
		{'c', tchar},
		{'i', tint},
		{'f', tfloat},
		{'s', tstring},
		{0, 0}
	};

	va_start(list, format);
	while (format && format[++i])
	{
		j = 0;
		while (farray[j].tc)
		{
			if (format[i] == farray[j].tc)
			{
				printf("%s", separator);
				farray[j].f(list);
			}
			j++;
		}
		separator = ", ";
	}
	putchar('\n');
	va_end(list);
}
