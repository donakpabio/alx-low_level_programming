#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main:  betty style doc for 
 * function main goes there 
 * Return: Exiting normally
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d", n);

	if(n > 0)
	{
		printf(" is positive\n");
	}else if(n==0)
	{
		printf(" is zero\n");
	}else
	{
		printf(" is negative\n");
	}

	return (0);
}
