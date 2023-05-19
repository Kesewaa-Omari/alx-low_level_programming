#include "main.h"
#include <string.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of bytes
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		c[i]  = 0;
	return (c);
}
