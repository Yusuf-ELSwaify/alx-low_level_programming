#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print variable of type dog
 * @d: object of type dog to be printed
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->age < 0)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
