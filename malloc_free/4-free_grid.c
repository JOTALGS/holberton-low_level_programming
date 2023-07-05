#include "main.h"
#include <stdlib.h>

void
free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);
	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
