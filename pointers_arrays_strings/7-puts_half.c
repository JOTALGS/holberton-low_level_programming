#include "main.h"
#include <stdio.h>
#include <string.h>

void
puts_half(char *s)
{
	int length = strlen(s);
	int i;

	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
		{
			putchar(s[i]);
		}
		putchar('\n');
	}
	else
	{
		for (i = ((length - 1) / 2) + 1; i < length; i++)
		{
			putchar(s[i]);
		}
		putchar('\n');
	}
}
