#include "main.h"
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array created
 */

int *array_range(int min, int max)
{
	int *_array;
	int i;

	if (min > max)
		return (NULL);
	_array = malloc(sizeof(int) * (max - min + 1));

	if (_array == NULL)
	return (NULL);

	for (i = 0; min <= max; i++)
	{
		min++;
	}

	_array[i] = min;

	return (_array);
	}
