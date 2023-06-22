#include "main.h"
#include <stdio.h>
#include <string.h>

void
print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
