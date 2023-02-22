#include "main.h"
/**
 * main - Entry point
 * Description: prints _putchar
 * Return:  0 (Success)
 */
int main(void)
{
	char s[] = "_putchar\n";
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);
	return (0);
}
