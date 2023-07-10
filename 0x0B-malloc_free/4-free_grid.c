#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Code's function that frees 2d previous alloc_grid function
 * @grid: 2d grid
 * @height: height dimension of grid
 * This will free memory of grid
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
int g;
for (g = 0; g < height; g++)
{
free(grid[g]);
}
free(grid);
}
