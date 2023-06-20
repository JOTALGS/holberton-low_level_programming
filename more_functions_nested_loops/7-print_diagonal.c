#include "main.h"

/**
 * print_diagonal - sdasdsadd
 * @n: skdksad
 */
void print_diagonal(int n)
{
	int c;
	int y;

	if (n > 0)
	{
		for (c = 0; c <= n; c++)
		{
			if (c != 0)
			{
				for (y = 2; y <= c ; y++)
				{
					_putchar (' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
