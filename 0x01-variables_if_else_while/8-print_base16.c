#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * use putchar function three times only
 *
 * Return: 0 (yes)
 */

int main(void)
{
	int a;
	char hd;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (hd = 'a'; hd  <= 'f'; hd++)
		putchar(hd);
	putchar('\n');
	return (0);
}

