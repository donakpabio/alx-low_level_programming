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


/**
 * dog_t - typedef for dog
 * Description: Something about it
 */
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


/**
 * init_dog - Do something
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * free_dog - Do something
 * @d: input
 * Return: Nothing
 */
void free_dog(dog_t *d);
