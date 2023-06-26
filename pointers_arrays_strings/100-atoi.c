#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int
_atoi(char *s)
{
	int len = strlen(s);
	int i;
	int c = 0;
	int n;
	char l = 'l';

	for (i = 0; i < len; i++)
	{
		if (s[i] == ' ')
		{
			s[i] = l;
		}
		if (isdigit(s[i]))
		{
			c = 1;
			continue;
		}
	}
	if (c == 1)
	{
		n = atoi(s);
		return (n);
	}
	else
	{
		return (0);
	}
}
