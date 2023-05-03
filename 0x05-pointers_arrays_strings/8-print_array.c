#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * must have a new line
 * must be separated y a comma and space
 * use printf function
 * @a: input array
 * @n: input n elements
 */

void print_array(int *a, int n)

{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
