#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * should print result, followed by newline
 * input and result can be stored as integer
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (yes) if true
 * print Error and return 1 if false
 */

int main(int argc, char *argv[])
{
	int x, y;

	x = 0;
	y = 0;

/* use argc == 3 to have 2 cmd line argument for multiplication*/
	if (argc == 3)
	{
		/* use atoi fn to convert argv to an integer */
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
