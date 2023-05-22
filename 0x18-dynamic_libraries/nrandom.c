#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * srand - Override srand function to do nothing.
 * @seed: (Not used)seed of the rand
 */
void srand(unsigned int seed)
{
	(void) seed;
}
/**
 * rand - Override rand function to return the winning numbers in sequence
 * Return: the winning numbers in sequence
 */
int rand(void)
{
	static int i = 0;
    int numbers[] = {8, 8, 7, 9, 23, 74};

	if (i < 6)
		return (numbers[i++]);

	return (i * i % 30000);
}
