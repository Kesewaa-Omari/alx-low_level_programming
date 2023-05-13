#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: input destination string
 * @src: input source string
 * @n: maximumm number of bytes to copied from src
 *
 * Return: pointer to '\0' of dst
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (src[i++])
	j++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];

	for (i = j; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
