#include "main.h"


/**
 * reverse_array - reverses the content of an array
 * @n: number of elements in array
 * @a: input integer
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = n - 1; i >= n / 2; i--)
	{
		p = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = p;
	}
}
