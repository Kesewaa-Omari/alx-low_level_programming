#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string into and integer
 * n in string preceded by an infinite number of characters
 * take into account all '-' & '+' signs before number
 * cannot use long
 * cannot declare new variables of "type" array
 * @s: input string
 * Return: 0 (yes)
 */

int _atoi(char *s)
{
	int i, j, k, length, m, num;

	i = 0;
	j = 0;
	k = 0;
	length = 0;
	m = 0;
	num = 0;

	while (s[length] != '\0')
	length++;

	while (i < length && m == 0)
	{
	if (s[i] == '-')
	++j;

	if (s[i] >= '0' && s[i] <= '9')
	{
	num = s[i] - '0';
	if (j % 2)
	num = -num;
	k = k * 10 + num;
	m = 1;
	if (s[i + 1] < '0' || s[i + 1] > '9')
	break;
	m = 0;
	}
	i++;
	}
	if (m == 0)
		return (0);
	return (k);
}
