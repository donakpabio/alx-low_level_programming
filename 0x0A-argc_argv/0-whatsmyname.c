#include <string.h>
#include "main.h"

void _putchar(int c)
{
	putchar(c);
}

int main(int argc, char **argv)
{
	int l = strlen(*(argv));
	int i = 0;

	while (i < l)
	{
		_putchar(*(*(argv) + i) + '0');
		i++;
	}
	_putchar('\n');
	exit(EXIT_SUCCESS);
}
