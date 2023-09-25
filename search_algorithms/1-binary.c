#include "search_algos.h"

int
binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = 0;
	size_t mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	last = size - 1;
	while (first <= last)
	{
		print_array(array, first, last);
		mid = (first + last) / 2;

		if (array[mid] > value)
			last = mid - 1;
		else if (array[mid] < value)
			first = mid + 1;
		else
			return (mid);
	}
	return (-1);
}