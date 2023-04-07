/**
 * flip_bits - the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: another number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;

	n ^= m;
	for (; n ; n >>= 1)
		bits += n & 1;

	return (bits);
}

