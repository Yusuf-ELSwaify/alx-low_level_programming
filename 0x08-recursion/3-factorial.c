/**
 * factorial - calculate the factorial of a given number
 * @n: number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (1);
	return (n * factorial(n - 1));
}
