#include <string.h>
#include "main.h"

/**
 * main - Main
 * @argc: input
 * @argv: input
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}	
	exit(EXIT_SUCCESS);
}
