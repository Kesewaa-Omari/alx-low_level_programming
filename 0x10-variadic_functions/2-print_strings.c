#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variable
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int i;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);
	if (str)
		printf("%s", str);
	else
		printf("(nil)");

	if (i < n - 1)
	if (separator != NULL)
		printf("%s", separator);
		}

		printf("\n");
		va_end(strs);
}
