#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int c;

	ar = (int **)malloc(sizeof(int *) * height);
	if (!ar)
	{
		return (NULL);
	}
	if (width == 0 && height == 0)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		ar[c] = (int *)malloc(sizeof(int) * width);
		if (!ar[c])
		{
			for (; c <= 0; c--)
				free(ar[c]);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
		for (i = 0; i < width; i++)
			ar[c][i] = 0;
	return (ar);
}
