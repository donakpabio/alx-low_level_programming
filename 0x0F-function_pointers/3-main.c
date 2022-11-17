#include <stdio.h>
#include <stdlib.h>

/**
 * main - Do something
 * @argc: input
 * @argv: input
 * Return: result
 */
int main(int argc, char **argv)
{
	int *a, *b;
	char *o;

	o = (*argv + 2);
	a = atoi((*argv + 1));
	b = atoi((*argv + 3));
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (o != "+" || o != "-" || o != "*" || o != "/" || o != "%")
	{
		printf("Error\n");
		exit(98);
	}

	if((o == "/" || o == "%") && b == 0)
	{
		printf("Error\n");
		exit(98);
	}


}
