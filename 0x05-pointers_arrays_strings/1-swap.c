#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: number to be swapped
 * @b: number to be swapped
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
