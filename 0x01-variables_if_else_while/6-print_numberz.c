#include <stdio.h>

/**
 * main - Print all single digits of base 10
 * start from 0 and end with a new line
 * Use putchar function only twice
 * Return: 0 (yes)
 */

int main(void)
{
	int sindi;

	for (sindi = '0'; sindi <= '9'; sindi++)
		putchar(sindi);
	putchar('\n');
	return (0);
}
