#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - declare and initialize a variable of type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
