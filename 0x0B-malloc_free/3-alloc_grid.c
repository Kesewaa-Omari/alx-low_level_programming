#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a 2-D array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2-D array
 */

int **alloc_grid(int width, int height)
{
	int **_grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	_grid = malloc(sizeof(int *) * height);

	if (_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		_grid[i] = malloc(sizeof(int) * width);

		if (_grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(_grid[i]);

			free(_grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			_grid[i][j] = 0;
	}

	return (_grid);
}

