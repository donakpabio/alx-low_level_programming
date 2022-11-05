#include <string.h>
#include "main.h"

void _putchar(int c)
{
	putchar(c);
}

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}	
	exit(EXIT_SUCCESS);
}
