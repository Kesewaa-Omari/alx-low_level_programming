#include <stdio.h>

/**
 * main - prints all the alphabet in lowercase except q and e
 * must be followed by a new line
 *
 * Return: 0 (yes)
 */

int main(void)
{
	char low;
		char q = 'q';
		char e = 'e';

		for (low = 'a'; low <= 'z'; low++)
		{
			if (low != e && low != q)
				putchar(low);
		}
		putchar('\n');
		return (0);
}
