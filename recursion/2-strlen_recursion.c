#include "main.h"

int
_strlen_recursion(char *s)
{
	int i = 1;

	if (*s)
	{
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
