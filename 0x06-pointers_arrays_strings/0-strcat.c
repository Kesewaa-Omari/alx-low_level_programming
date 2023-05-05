#include "main.h"
#include <stdio.h>

/**
 * *_strcat - appends source string to destination string
 * must overwrite the terminating null byte (\0)
 * at the end of dest then add '\0'
 * @dest: input destination value
 * @src: input source value
 *
 * Return: A pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *ptr = dest;

	i = 0;

	while (*ptr != '\0')
	{
		ptr++;
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
