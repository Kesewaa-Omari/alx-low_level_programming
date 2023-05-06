#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int a, b, ct;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	ct = 1;

	while (b > 9)
	{
		b /= 10;
		ct *= 10;
	}

	for (; ct >= 1; ct /= 10)
	{
		_putchar(((a / ct) % 10) + 48);
	}
}
