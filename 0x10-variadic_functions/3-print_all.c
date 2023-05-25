#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *separator = "";
	char *str;

	va_start(ap, format);

	if (format)
	{
	while (format[i])
	{
	switch (format[i])
	{
	case 'c':
		printf("%s%c", separator, va_arg(ap, int));
		break;
	case 'i':
		printf("%s%d", separator, va_arg(ap, int));
		break;
	case 'f':
		printf("%s%f", separator, va_arg(ap, double));
		break;
	case 's':
		str = va_arg(ap, char *);
		if (!str)
		str = "(nil)";
		printf("%s%s", separator, str);
		break;
		default:
		i++;
		continue;
		} separator = ", ";
		i++;
		}
		} printf("\n"), va_end(ap);
		}
