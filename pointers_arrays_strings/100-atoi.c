#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int
_atoi(char *s)
{
	int len = strlen(s);
	int len_1;
	int i;
	int c;
	char str[500] = "s";
	int ind = 0;

	for (i = 0; i < len; i++)
	{
		if (isdigit(s[i]))
		{
			c = i - 1;
			if (s[c] == '+' || s[c] == '-')
			{
				str[ind] = s[c];
			}
			str[ind] = s[i];
		}
	}
	len_1 = strlen(str);
	puts(str);
	if (len_1 != 0)
	{
		return (atoi(str));
	}
	else
	{
		return (0);
	}
}
