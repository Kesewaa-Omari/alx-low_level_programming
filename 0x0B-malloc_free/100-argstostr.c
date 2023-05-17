#include "main.h"
#include <stdlib.h>


/**
 * *argstostr - concatenates all arguments in program
 * @ac: integer input
 * @av: double pointer array
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			x++;
	}
	x += ac;

	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[y] = av[i][j];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}
