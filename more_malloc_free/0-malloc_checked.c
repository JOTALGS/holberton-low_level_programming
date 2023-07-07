#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - check the code
 *
 * @b: sadaw
 * Return: void ptr WTF????
 */
void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (!a)
		exit(98);
	return (a);
}
