#include "main.h"

int
find_square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i >= n / 2)
		return (-1);
	else
	{
		i++;
		return (find_square(n, i));
	}
}

int
_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_square(n, 1));
}
