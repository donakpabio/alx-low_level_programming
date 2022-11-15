#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Do somthing
 * @name: input
 * @age: input
 * @owner: input
 * Return: result
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(name) + sizeof(age) + sizeof(owner));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
