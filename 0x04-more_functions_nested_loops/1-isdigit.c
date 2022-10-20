#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - check the code.
 * @c: input
 * Return: result
 */
int _isdigit(int c)
{
	return (isdigit(c) > 0 ? 1 : 0);	
}
