/**
 * _sqrt - calculate n square root
 * @n: number
 * @root: number to test if root
 * Return: the root or -1 if the number hasn't root
 */
int _sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (n / 2 == root)
		return (-1);
	return (_sqrt(n, root + 1));
}
/**
 * _sqrt_recursion - calculate n square root
 * @n: number
 * Return: the n square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (0);
	return (_sqrt(n, 1));
}
