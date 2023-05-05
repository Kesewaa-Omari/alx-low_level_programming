#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 * @dest: input destination value
 * @src: input source value
 * @n: number of bytes from src
 *
 * Return: A pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char *ptr = dest;

	i = 0;
	j = 0;

	while (*ptr != '\0')
	{
		ptr++;
		i++;
	}

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
