#include "main.h"
#include <stdlib.h>

/**
 * *create_array - adsfa
 * @size: asdsdfa
 * @c: asdfasf
 * Return: arr.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size);
	if (!arr)
		return (NULL);
	for (i = 0; i <= size; i++)
		arr[i] = c;
	return (arr);
}