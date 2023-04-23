#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 * numbers should be separated by a space
 * numbers should be separated by a comma then a space
 * should be printed in ascending order
 * use putchar function a maximum of 8 times
 *
 * Return: 0 (yes)
 */

int main(void)
{
int x;
int y;

for (x = 0; x <= 98; x++)
{
for (y = x + 1; y <= 99; y++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');
if (x == 98 && y == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
