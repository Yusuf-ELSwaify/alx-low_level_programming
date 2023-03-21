#include "dog.h"
/**
 * print_dog - print variable of type dog
 * @d: object of type dog to be printed
 */
void print_dog(struct dog *d);
{
	if (!d)
		return;

	printf("Name: %s\n"
		"Age: %f\n"
		"Owner: %s\n"
			, d->name, d->age, d->owner);
}
