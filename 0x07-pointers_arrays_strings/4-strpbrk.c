#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches for a string for any set of bytes.
 * @s: input
 * @accept: input
 *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept
 * if no set is matchhed - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
