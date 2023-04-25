#include "main.h"

/**
*print_alphabet - prints alphabet in lowercase
*must be followed by a new line
*use _putchar function twice only
*Return: void
*/

void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');

}
