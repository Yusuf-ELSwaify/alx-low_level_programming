#include <stdio.h>
/**
 * is_prime - Check if is a prime number
 * @n: the number
 * Return: 1 (prime) 0 (not prime)
 */
int is_prime(unsigned long int n)
{
	unsigned long int i = 2;

	if (n < 2)
		return (0);

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n, i = 2, largest_factor = -1;

	n = 612852475143;
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
				largest_factor = i;
			if (is_prime(n / i))
				largest_factor = n / i;
		}
		i++;
	}
	printf("%li\n", largest_factor);
	return (0);
}
