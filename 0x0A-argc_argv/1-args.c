#include <string.h>
#include "main.h"

/**
 * main - Main
 * @argc: input
 * @argv: input
 * Return: result
 */
int main(int argc, char **argv)
{
	int l = sizeof(*argv)/sizeof(char);
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
