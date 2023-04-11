#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - function that creates a nested loop to make grid
  *@width: width input
  *@height: height input
  *Return: a pointer to a 2 dimensional array of integers
  */
int **alloc_grid(int width, int height)
{
	int **loo;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	loo = malloc(sizeof(int *) * height);

	if (loo == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		loo[x] = malloc(sizeof(int) * width);

		if (loo[x] == NULL)
		{
			for (; x >= 0; x--)
				free(loo[x]);

			free(loo);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			loo[x][y] = 0;
	}
	return (loo);
}
