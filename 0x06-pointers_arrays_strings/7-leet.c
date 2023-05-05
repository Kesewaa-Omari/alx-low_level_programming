#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: pointer to the encoded str
 */

char *leet(char *str)
{
	int i;
	int j;
	char z[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == z[j] ||
				str[i] - 32 == str[j])
				str[i] = j + '0';
			}
		i++;
		}
return (str);
}
