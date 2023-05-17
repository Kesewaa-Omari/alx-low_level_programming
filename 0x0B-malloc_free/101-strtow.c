#include "main.h"
#include <stdlib.h>

int _counter(char *str);
char **strtow(char *str);

/**
 * _counter - helper function to count the number of words in a string
 * @str: input string
 *
 * Return: number of words
 */

int _counter(char *str)
{
	int f, g, w;

	f = 0;
	w = 0;

	for (g = 0; str[g] != '\0'; g++)
	{
	if (str[g] == ' ')
	f = 0;
	else if (f == 0)
	{
	f = 1;
	w++;
	}
	}

	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to an array of strings
 * or NULL
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = _counter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[j] = NULL;

	return (matrix);
}
