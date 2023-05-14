#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: the argument counter
 * @argv: the argument vector
 *
 * Return: 0 if number is negative followed by \n
 * else print Error and return 1 if argument number passed is
 * not 1
 */

int main(int argc, char *argv[])
{
	int num, x, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= coins[x])
		{
			result++;
			num -= coins[x];
		}
	}

	printf("%d\n", result);
	return (0);
}
