#include "main.h"
#include <stdlib.h>

int *
array_range(int min, int max)
{
	int *arr;
	int i;
	int st = min;

	if(min > max)
		return (NULL);
	while(st < max)
		st++;
	arr = malloc((st + 1) * sizeof(int));
	if(!arr)
		return (NULL);
	for(i = 0; i <= st; i++)
		arr[i] = min + i;
	return (arr);
}
