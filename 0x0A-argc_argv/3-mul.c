#include <string.h>
#include "main.h"

void _putchar(int c)
{
	putchar(c);
}

int main(int argc, char **argv)
{
	if (argc - 1 < 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", *(argv + 1) * *(argv + 2));
	_puchar('\n');
	exit(EXIT_SUCCESS);
}
