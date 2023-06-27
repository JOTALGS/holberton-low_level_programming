#include "main.h"
#include <string.h>

char
*_strncat(char *dest, char *src, int n)
{
	int lend = strlen(dest) - 1;
	int i;

	if (src[0] != '\0')
	{
		for (i = 0; i < n; i++)
		{
			dest[lend + i] = src[i];
		}
	}
	return (dest);
}
