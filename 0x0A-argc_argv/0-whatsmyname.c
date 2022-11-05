#include <string.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: input
 * @argv: input
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("%s\n", *(argv));
	}
	exit(EXIT_SUCCESS);
}
