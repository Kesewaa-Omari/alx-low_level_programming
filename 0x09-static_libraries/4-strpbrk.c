#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches for a string for any set of bytes.
 * @s: input
 * @accept: input
 *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept
 * if no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (n = 0; accept[n] != '\0'; n++)
	{
	if (s[i] == accept[n])
	return (s + i);
	}
	}
	return (NULL);
}
