#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - upers
 * @c: int int
 * Return: 0 o 1 qcyo
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
