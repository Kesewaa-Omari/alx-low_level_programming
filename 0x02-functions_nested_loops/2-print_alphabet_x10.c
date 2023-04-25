#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * must be follow a new line
 * use _putchar function twice only
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char low;
	int i = 0;

	while (i <= 9)
	{

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
	i++;
	}
}
