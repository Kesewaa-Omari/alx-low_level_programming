#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number of bytes
 *
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int L1 = 0, L2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[L1] != '\0')
	{
		L1++;
	}
	while (s2[L2] != '\0')
	{
		L2++;
	}

	if (n >= L2)
		n = L2;
	str = malloc(sizeof(char) * (L1 + n + 1));

	if (str == NULL)
	return (0);

	for (i = 0; i < L1; i++)
	{
		str[i] = s1[i];
	}

	for (; i < (L1 + n); i++)
	{
		str[i] = s2[i - L1];
	}

	str[i] = '\0';
	return (str);
	}
