#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str: input string
 * Return: str
 */

char *rot13(char *str)
{
	int i;
	int j;
	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
				break;
			}
		}
	}

	return (str);
}
