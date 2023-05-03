#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * if number of characters is odd, print the last
 * n characters of the string
 * n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: half of input
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	if (i % 2 == 1)
		n = i / 2;
	else
		n = (i - 1) / 2;

	for (n++; n < i; n++)
		_putchar(str[n]);
				_putchar('\n');
				}
