#include <stdio.h>

/**
 * myStartupFun - Do something
 * Return: Nothing
 */
void myStartupFun(void) __attribute__((constructor));

/**
 * myStartupFun - Do something
 * Return: Nothing
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
