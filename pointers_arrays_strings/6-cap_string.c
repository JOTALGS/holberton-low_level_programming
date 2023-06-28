#include "main.h"
#include <stdio.h>
#include <ctype.h>

char
*cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] -32;
			}
			else if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t' || str[i - 1] == '.')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
