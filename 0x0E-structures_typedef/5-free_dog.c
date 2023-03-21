#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free a variable of type struct dog
 * @d: object of type dog to be inizialized
 */
void free_dog(dog_t *d)
{
	if (!d)
		free(d);
}
