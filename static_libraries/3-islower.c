#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - dale qnas
 * @c: input value
 * Return: 1 if lower, 0 if upper.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
