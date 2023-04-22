#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of single digit numbers
 * numbers should be separated by ','
 * numbers should be in ascending order
 * maximum use of putchar should be four times only
 *
 * Return: 0 Always (yes)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
