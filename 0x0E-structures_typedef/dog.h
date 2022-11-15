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

#ifndef DOG_T_H
#define DOG_T_H
/**
 * dog_t - typedef for dog
 * Description: Something about it
 */
typedef struct dog dog_t;
#endif

#ifndef FREE_DOG_H
#define FREE_DOG_H
/**
 * free_dog - Do something
 * @d: input
 * Return: Nothing
 */
void free_dog(dog_t *d);
#endif

#ifndef NEW_DOG_H
#define NEW_DOG_H
/**
 * new_dog - Do somthing
 * @name: input
 * @age: input
 * @owner: input
 * Return: result
 */
dog_t *new_dog(char *name, float age, char *owner);
#endif
