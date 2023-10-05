#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * @grid: grid of memory to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
