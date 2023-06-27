#include "main.h"
#include <stdio.h>

void
reverse_array(int *a, int n)
{
	int i;
	int ar[25];
	int y = 0;

	for (i = (n - 1); i >= 0; i--)		
	{
		ar[y] = a[i];
		y++;
	}
	for (i = 0; i <= n; i++)
	{
		a[i] = ar[i];
	}
}
