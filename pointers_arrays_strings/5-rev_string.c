#include "main.h"
#include <stdio.h>
#include <string.h>

void
rev_string(char *s)
{
	int lenght = strlen(s);
	int i;
	int c;
	char ch;
	char str[500];

	c = 0;
	strcpy(str, s);
	for (i = lenght - 1; i >= 0; i--)
	{
		ch = str[i];
		s[c] = ch;
		c++;
	}
}
