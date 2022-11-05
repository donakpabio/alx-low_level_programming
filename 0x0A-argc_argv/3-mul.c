#include "main.h"

/**
 * main - Main
 * @argc: input
 * @argv: input
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	int a = atoi(*(argv + 1));
	int b = atoi(*(argv + 2));

	int c = a * b;
	printf("%d\n", c);
	exit(EXIT_SUCCESS);
}
