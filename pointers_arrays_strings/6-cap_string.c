#include "main.h"
#include <stdio.h>
#include <ctype.h>

char
*cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			if (isalpha(str[i + 1]))
			{
				str[i + 1] = str[i+ 1] - 32;
			}
		}
	}
	return (str);
}
