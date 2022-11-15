#ifndef STDIO_H
#include <stdio.h>
#endif
#ifndef DOG_H
#include "dog.h"
#endif

/**
 * print_dog - Do something
 * @d: input
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name == NULL ? "(nil)" : (*d).name);
		printf("Age: %1f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner == NULL ? "(nil)" : (*d).owner);
	}
}
