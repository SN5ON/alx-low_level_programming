#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - function prints firts before main is excuted
 * Return: Null
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

