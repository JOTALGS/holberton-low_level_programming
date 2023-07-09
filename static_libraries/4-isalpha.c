#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - dale qnas
 * @c: input value
 * Return: 1 if lower, 0 if upper.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
