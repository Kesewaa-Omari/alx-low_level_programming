#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * should include first argument
 * print one argument per line, ending with a \n
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (yes)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
