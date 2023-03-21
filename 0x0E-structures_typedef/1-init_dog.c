#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: object of type dog to be inizialized
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
