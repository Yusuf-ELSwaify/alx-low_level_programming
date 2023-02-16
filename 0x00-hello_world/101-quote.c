#include <unistd.h>
/**
 * main - Entry point
 * Description: print without printf or puts
 * Return: Always  1 (Error)
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, 59);
	return (1);
}
