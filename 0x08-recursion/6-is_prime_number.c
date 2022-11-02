#include "main.h"

/**
 * is_prime_number - Do something
 * @n: input
 * @i: input
 * Return: result
 */
int is_prime(int n, int i)
{
	if ((n <= 1) || ((n % i == 0) && (n != i))
	{
		return (0);
	} else if (n == i)
	{
		return (1);
	}
	i++;
        return (is_prime(n, i));
} 

/**
 * is_prime_number - Do something
 * @n: input
 * Return: result
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
