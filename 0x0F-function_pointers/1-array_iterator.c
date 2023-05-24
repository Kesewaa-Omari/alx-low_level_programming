#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * which prints each element in array on a new line.
 * @array: array
 * @size: size of the array
 * @action: pointer to the function which prints elements
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
/*size_t is an unsigned int*/

	unsigned int i = 0;

	if (array == NULL || size < 0 || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
		}
		}
