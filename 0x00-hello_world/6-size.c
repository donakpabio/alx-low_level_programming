#include <stdio.h>

/**
 * This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
* with beginning and ending almost-blank lines.
*/
int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int e = sizeof(float);

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of a int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %d byte(s)\n", e);
	/* test */
	return (0);
}
