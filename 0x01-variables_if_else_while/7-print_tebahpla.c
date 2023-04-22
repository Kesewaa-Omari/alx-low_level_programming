#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 * must have a new line
 * use putchar function only twice
 *
 * Return: 0 (yes)
 */

int main(void)
{
	    char lowa;

for (lowa = 'z'; lowa >= 'a'; lowa--)
putchar(lowa);
putchar('\n');

return (0);
}
