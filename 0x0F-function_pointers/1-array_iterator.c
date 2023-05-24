#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - executes a function that prints
 * each element in an array on a new line
 * @array: array
 * @size: size of array
 * @action: pointer to the function that prints elements in an array
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
/* size_t is an unsigned int data type*/

	size_t i;

	if (array == NULL || size < 0 || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
