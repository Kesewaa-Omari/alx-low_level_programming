#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of the string.
 * @s: the string to get the length
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
