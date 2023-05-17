#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - saves a copy of the string given as parameter
 * @str: input string
 *
 * Return: a pointer to a newly allocated space in memory
 * if str = NULL, return NULL for insufficient memory
 */

char *_strdup(char *str)
{
	unsigned int x;
	unsigned int length;
	char *s;

	x = 0;
	length = 1;

	if (str == NULL)
	return (NULL);
	while (str[length])
		length++;
	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
		return (NULL);
	while ((s[x] = str[x]) != '\0')
		x++;
	return (s);
}
