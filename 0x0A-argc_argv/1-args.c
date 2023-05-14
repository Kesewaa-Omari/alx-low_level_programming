#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * should print a number followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (yes)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("The number of arguments passed: %d\n", argc - 1);
	return (0);
}
