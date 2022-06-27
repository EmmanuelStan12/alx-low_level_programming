#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array
 * @grid: the two dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}
