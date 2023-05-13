#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a specific value.
 * @n: number of bytes to be changed
 * @s: memory area
 * @b: desired value
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
	s[a] = b;
	n--;
	}
	return (s);
}
