#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Print the alphabet in lower case
 * it should be on a new line and use putchar function twice
 * Return: 0 Always (yes)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
