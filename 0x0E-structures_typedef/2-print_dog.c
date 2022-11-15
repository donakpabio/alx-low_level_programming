#include <stdio.h>

/**
 * print_dog - Do something
 * @d: input
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d.name);
	printf("Age %1f\n", d.age);
	printf("Owner %s\n", d.owner);
}
