#include "main.h"
#include <string.h>

char
*_strcat(char *dest, char *src)
{
	int lend = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[lend + i] = src[i];
	}
	return (dest);
}
