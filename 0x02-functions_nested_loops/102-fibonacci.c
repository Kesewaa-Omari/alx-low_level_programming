#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Starts with 1 and 2
 * must have new line
 * Return: Nothing
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
	else if (a == 1)
		printf(", %ld", c);
	else
	{
		c += b;
		b = c - b;
		printf(", %ld", c);
	}
	++a;
	}
	printf("\n");
	return (0);
}
