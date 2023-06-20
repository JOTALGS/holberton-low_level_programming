#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - eso
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			putchar(c);
		}
	}
	putchar('\n');
}
