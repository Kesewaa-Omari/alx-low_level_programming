#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: input first string for comparison
 * @s2: input second string for comparison
 *
 * Return: *s1 - *s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	return (*s1 - *s2);
}
