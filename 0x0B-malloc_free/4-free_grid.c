#include <stdlib.h>
#include <stdio.h>
#include  "main.h"

/**
 * free_grid - it free dynamically allocated memory
 * @grid: 2d-pointer to  2d-array of integer
 * @height: no of rows in 2d-array-pointer to col
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
