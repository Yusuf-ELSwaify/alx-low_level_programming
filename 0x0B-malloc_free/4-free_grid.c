#include <stdlib.h>
/**
 * free_grid - free a 2D array
 * @grid: the 2D array
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	height--;
	while (height)
		free(grid[--height]);
	free(grid);
}
