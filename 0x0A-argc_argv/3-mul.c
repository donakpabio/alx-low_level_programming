#include "main.h"

/**
 * main - Main
 * @argc: input
 * @argv: input
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int a = 0, b = 0, c = 0;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(*(argv + 1));
	b = atoi(*(argv + 2));

	c = a * b;

	printf("%d\n", c);
	exit(EXIT_SUCCESS);
}
