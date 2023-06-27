#include "main.h"
#include <string.h>

char
*_strncpy(char *dest, char *src, int n)
{
	int i;

	if (src[0] != '\0')
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
