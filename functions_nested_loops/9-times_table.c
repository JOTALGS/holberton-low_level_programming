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
		for (j = 0; j <= n; j++) 
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
