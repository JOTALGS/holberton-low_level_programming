#include "main.h"
#include <stdio.h>

void
reverse_array(int *a, int n)
{
	int i;
	int y = 0;
	int arr[40];

	for (i = n - 1; i >= 0; i--)
	{
		arr[y] = a[i];
		y++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
}
