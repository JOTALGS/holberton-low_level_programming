#include "main.h"
#include <stdlib.h>

int *
array_range(int min, int max)
{
	int *arr;
	int i;
	int st = min;
	int ct = 0;

	if (min > max)
		return (NULL);

	while (st < max)
	{
		ct++;
		st++;
	}
	arr = malloc((ct + 1) * sizeof(int));
	if (!arr)
		return (NULL);
	for (i = 0; i <= ct; i++)
		arr[i] = min + i;
	return (arr);
}
