#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print variable of type dog
 * @d: object of type dog to be printed
 */
void print_dog(struct dog *d)
{
	char c_age[20];
	if (!d)
		return;
	sprintf(c_age, "%f",d->age);
	printf("Name: %s\n"
		"Age: %s\n"
		"Owner: %s\n"
			, d->name ? d->name : "(nil)"
			, d->age > 0 ? c_age : "(nil)"
			, d->owner ? d->owner : "(nil)");
}
