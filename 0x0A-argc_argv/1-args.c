#include <stdlib.h>
#include "main.h"

/**
 * main - Main
 * @argc: input
 * @argv: input
 * Return: result
 */
int main(int argc, char **argv)
{
	if (sizeof(argv) > 0 )
	{
		printf("%d\n", argc - 1);
	}
	exit(EXIT_SUCCESS);
}
