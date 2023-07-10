#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function of code returns a pointer to a 2D array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * int value w and h
 * Return: Pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **rp;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	rp = malloc(sizeof(int *) * height);
	if (rp == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		rp[h] = malloc(sizeof(int) * width);
		if (rp[h] == NULL)
		{
			for (; h >= 0; h--)
				free(rp[h]);
			free(rp);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			rp[h][w] = 0;
	}

	return (rp);
}
