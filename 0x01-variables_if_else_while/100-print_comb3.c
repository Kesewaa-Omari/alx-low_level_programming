#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 Always (yes)
 */

int main(void)
{
int d;
int pc;

for (d = '0'; d < '9'; d++)
{
for (pc = d + 1; pc <= '9'; pc++)
{
if (pc != d)
{
putchar(d);
putchar(pc);
if (d == '8' && pc == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
