#include "main.h"
#include <stdio.h>
#include <string.h>

void
puts_half(char *s)
{
	int length = strlen(s);
	int i;

	for (i = (length / 2) - 1; i < length; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
