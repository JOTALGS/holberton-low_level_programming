#include "main.h"
#include <string.h>

char
*_strncpy(char *dest, char *src, int n)
{
	int i;
	char nl = '\0';

	for (i = 0; i < n && src[i] != nl; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
