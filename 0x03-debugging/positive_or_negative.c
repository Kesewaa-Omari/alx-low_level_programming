#include "main.h"

/**
*main - Prints the number if it is positive, zero or negative
*Return: Always 0 (yes)
*/

void positive_or_negative(int i)
{

if (i > 0)
{
printf("%d is positive\n", i);
}

else if (i == 0)
{
printf("%d is zero\n", i);
}

else
{
printf("%d is negative\n", i);
}

return;
}
