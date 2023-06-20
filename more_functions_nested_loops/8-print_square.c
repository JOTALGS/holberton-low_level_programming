#include "main.h"

/**
 * print_square - main
 * @size: bla bla
 */
void print_square(int size)
{
	int c;
	int b;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
