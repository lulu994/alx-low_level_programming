#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *free_grid - function that  frees 2D array
  *@grid: 2D grid
  *@height: height dimension of grid
  *
  *Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
