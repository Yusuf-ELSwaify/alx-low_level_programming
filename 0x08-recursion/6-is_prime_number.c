/**
 * _prime - check if the number divisible by the divisor
 * @n: number
 * @divisor: number to divide by
 * Return: 0 (not prime) 1 (prime)
 */
int _prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	/*
	 * if (n / 2 > n)
	 *	return (1);
	 */
	if (n % divisor == 0 || n % (divisor + 2) == 0)
		return (0);
	return (_sqrt(n, divisor + 6));
}
/**
 * is_prime_number - check if number is prime
 * @n: number
 * Return: 0 (not prime) 1 (prime)
 */
int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0 || n % 3 == 0)
		return (0);
	return (_sqrt(n, 5));
}
