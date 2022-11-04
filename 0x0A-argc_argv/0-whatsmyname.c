#include <string.h>
#include "main.h"

int main(int argc, char **argv)
{
	int l = strlen(*(argv));
	int i = 0;
	char *p = *(argv);

	while (i < l)
	{
		_putchar(*(p + i) + '0');
		i++;
	}
	exit(EXIT_SUCCESS);
}
