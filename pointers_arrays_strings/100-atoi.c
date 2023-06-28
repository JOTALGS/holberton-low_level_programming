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
	int sgn = 1;
	char str[500] = "s";
	int ind = 0;

	for (i = 0; i < len; i++)
	{
		if (isdigit(s[i]))
		{
			if (s[i - 1] == ' ')
			{
				sgn = 1;
			}
			else if (s[i -1] == '-')
			{
				sgn = - 1;
			}
			str[ind] = s[i];
			ind++;
			if (isdigit(s[i + 1]))
			{
			}
			else
			{
				break;
			}
		}
	}
	len_1 = strlen(str);
	if (len_1 != 0)
	{
		return (atoi(str) * sgn);
	}
	else
	{
		return (0);
	}
}
