#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int
_atoi(char *s)
{
	int sgn = 1;
	int n = 0;

	do {
		if (*s == '-')
			sgn *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * sgn);
}
