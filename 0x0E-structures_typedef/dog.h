#ifndef dog
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
#ifndef dog_t
typedef struct dog dog_t;
#endif

#ifndef new_dog
/**
 * new_dog - Do somthing
 * @name: input
 * @age: input
 * @owner: input
 * Return: result
 */
dog_t *new_dog(char *name, float age, char *owner);
#endif

#ifndef print_dog
/**
 * print_dog - Do something
 * @d: input
 * Return: Nothing
 */
void print_dog(struct dog *d);
#endif

#ifndef init_dog
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

#ifndef free_dog
/**
 * free_dog - Do something
 * @d: input
 * Return: Nothing
 */
void free_dog(dog_t *d);
#endif
