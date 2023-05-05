#include "main.h"

/**
 * *leet - function that encodes a string
 * @str: string to be encoded
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char z[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == z[j] ||
					str[i] - 32 == z[j])
				str[i] = j + '0';
		}
	}
	return (str);
}
