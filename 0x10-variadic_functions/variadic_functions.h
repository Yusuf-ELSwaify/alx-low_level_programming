#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct Ftype - Struct op
 * @tc: Parameter
 * @f: The function associated
 */
typedef struct Ftype
{
	char tc;
	void (*f)(va_list);
} ftype;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
