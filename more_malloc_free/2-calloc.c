#include "main.h"
#include <stdlib.h>

/**
 * *calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	return (arr);
}
