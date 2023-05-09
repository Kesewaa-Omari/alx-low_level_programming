#include "main.h"
#include <stdio.h>

/**
 * *_strstr - entry point
 * @haystack: input
 * @needle: input
 *
 * Return: a pointer to the beginning of the located substring
 * if substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
