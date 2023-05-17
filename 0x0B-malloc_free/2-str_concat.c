#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: concatenation of strings; s1 and s2
 * must point to new malloc
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = 0;
	y = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	str = malloc(sizeof(char) * (x + y + 1));

	x = 0;
	y = 0;

	if (str == NULL)
		return (NULL);

	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		str[x] = s2[y];
		x++, y++;
	}
	str[x] = '\0';
	return (str);
}

