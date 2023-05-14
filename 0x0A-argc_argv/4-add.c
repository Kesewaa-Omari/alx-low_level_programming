#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * print result followed by a new line.
 * numbers and addition of numbers can be stored in int
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 followed by \n if no number passed
 * else print Error and return 1 if one number contains symbols
 */

int main(int argc, char *argv[])
{
	int a;
	unsigned int b;
	unsigned int sum = 0;
	char *s;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			s = argv[a];

			for (b = 0; b < strlen(s); b++)
			{
				if (s[b] < 48 || s[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
