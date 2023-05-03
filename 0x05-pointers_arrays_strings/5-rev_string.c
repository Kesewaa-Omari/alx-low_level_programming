#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int x;
	char rev;
	int index = 0;

	while (s[index] != '\0')
		index++;

	for (x = 0; x < index; x++)
	{
		index--;
		rev = s[x];
		s[x] = s[index];
		s[index] = rev;
	}
}
