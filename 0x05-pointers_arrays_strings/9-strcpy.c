#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * terminate null byte (\0), to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		*(dest + a) = *(src + a);
		if (*(src + a) == '\0')
			break;
		a++;
	}
	return (dest);
}
