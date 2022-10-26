#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

void _crackme()
{
	int i = 0;
	time_t t;
	int n = 15;

	srand((unsigned) time(&t));

	while (i < n)
	{
		printf("%d", rand() % 20);
		i++;
	}
	putchar('\n');
	
}
