#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - get the length of a string
 * @s: pointer to array of characters
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i++] != '\0')
		;
	return (i - 1);
}
/**
 * _strcpy - copy string characters to another string
 * @dest: pointer to array of characters copy in it
 * @src: array we will copy from it
 * Return: the pointer of the destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		++i;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
/**
 * new_dog - declare and initialize a variable of type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to object dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = malloc(_strlen(name) + 1);
	if (!d->name)
	{
		free(d);
		return (0);
	}

	d->owner = malloc(_strlen(owner) + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (0);
	}
	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}
