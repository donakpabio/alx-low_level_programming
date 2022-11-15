#ifndef DOG_H
#define DOG_H
#include "dog.h"
#endif

/**
 * new_dog - Do somthing
 * @name: input
 * @age: input
 * @owner: input
 * Return: result
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return (d == NULL ? NULL : d);
}
