#include <stdio.h>

/**
 * main - prrints the alphabet in lowercase
 * then in upper case with a new line
 * using putchar function three times
 *
 * Return: 0 (yes)
 */

int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		putchar(lcase);
	for (lcase = 'A'; lcase <= 'Z'; lcase++)
		putchar(lcase);
	putchar('\n');
	return (0);
}
