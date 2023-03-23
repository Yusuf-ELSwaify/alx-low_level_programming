#include <stdlib.h>
/**
 * array_iterator -function that executes a function
 given as a parameter on each element of an array.
 * @array: array to be pathed to the function
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!action || !array)
		return;
	while (size--) 
		(*action)(*array++);
}
