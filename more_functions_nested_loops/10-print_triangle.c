#include "main.h"

/**
 * print_triangle - main
 * @size: bla bla
 */
void print_triangle(int size)
{
	int c;
	int b;
	int a;
	int e;

	a = size;
	e = 1;
	for (c = 1; c <= size; c++)
	{
		a--;
		for (b = 1; b <= a; b++)
		{
			_putchar(' ');
		}
		for (b = 1; b <= e; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
		e++;
	}
}
