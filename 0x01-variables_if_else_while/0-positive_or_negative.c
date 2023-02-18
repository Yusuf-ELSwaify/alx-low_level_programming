#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: print is the number +ve, -ve or Zero
 * Return:  0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
