#include "main.h"
#include <string.h>

char
*_strncat(char *dest, char *src, int n)
{
	int lend = strlen(dest);
	int i;

	for (i = 0; i < n; i++)
	{
		dest[lend + i] = src[i];
	}
	return (dest);
}
