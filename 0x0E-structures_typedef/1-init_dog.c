#ifndef DOG_H
#define DOG_H
#include "dog.h"
#endif

/**
 * init_dog - Do something
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
