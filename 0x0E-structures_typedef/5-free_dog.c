#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Do something
 * @d: input
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
