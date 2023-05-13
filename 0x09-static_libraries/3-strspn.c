#include "main.h"
#include <stdio.h>

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: 0 Always (yes)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
	for (y = 0; accept[y]; y++)
	{
	if (*s == accept[y])
	{
	x++;
	break;
	}

	else if (accept[y + 1] == '\0')
	return (x);
	}
	s++;
	}
	return (x);
}
