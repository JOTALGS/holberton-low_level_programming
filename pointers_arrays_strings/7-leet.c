#include "main.h"
#include <stdio.h>
	
char
*leet (char *str)
{
	int i;
	int j;
	char cd[5] = {'4', '3', '0', '7', '1'};
	char lo[5] = {'a', 'e', 'o', 't', 'l'};
	char up[5] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lo[j] || str[i] == up[j])
				str[i] = cd[j];
		}
	}

	return (str);
}
