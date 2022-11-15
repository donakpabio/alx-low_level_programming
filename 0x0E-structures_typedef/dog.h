#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Soemthing about it
 * @name: input
 * @age: input
 * @owner: input
 * Description: Just dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#ifndef INIT_DOG_H
#define INIT_DOG_H
/**
 * init_dog - Do something
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#ifndef PRINT_DOG_H
#define PRINT_DOG_H
/**
 * print_dog - Do something
 * @d: input
 * Return: Nothing
 */
void print_dog(struct dog *d);
#endif
