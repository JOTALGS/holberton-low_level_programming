#include "main.h"
#include <stdio.h>
/**
 * times_table - asf damd
 */
void times_table(void)
{
	int i;
	int j;
	int n = 9;

	for (i = 0; i <= n; i++)
	{
		printf("%d", 0);
		printf(",");
		for (j = 1; j <= n; j++)
		{
			printf("%3d", i * j);
			if (j != n)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}