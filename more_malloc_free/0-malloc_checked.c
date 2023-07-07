#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - check the code
 *
 * @b: sadaw
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);
	if (!a)
		exit(98);
	return (a);
}
