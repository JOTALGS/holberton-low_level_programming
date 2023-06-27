#include "main.h"
#include <string.h>

int
_strcmp(char *s1, char *s2)
{
	char a;
	char b;
	int i = 0;

	do{
		a = s1[i];
		b = s2[i];
		if (a == '\0')
		{
			return (a - b);
		}
		i++;
	}
	while (a == b);
	{
	}
	return (a - b);
}
