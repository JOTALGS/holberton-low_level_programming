#include "function_pointers.h"
#include <stddef.h>

void
array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array && (size > 0))
	{
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
