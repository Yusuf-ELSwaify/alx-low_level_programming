/**
 * int_index -function that searches for an integer.
 * @array: array to be pathed to the function
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which
 * the cmp function does not return 0 If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (!cmp || !array)
		return (-1);
	while (++i < size)
		if ((*cmp)(array[i]))
			return (i);
	return (-1);
}
