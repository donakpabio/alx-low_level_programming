struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/**
 * new_dog - Do somthing
 * @name: input
 * @age: input
 * @owner: input
 * Return: result
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * print_dog - Do something
 * @d: input
 * Return: Nothing
 */
void print_dog(struct dog *d);
