#include "main.h"

/**
 * *_memcpy - copies memory area from source to destination
 * @dest: destination
 * @src: source
 * @n: maximum bytes to use
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);
}
