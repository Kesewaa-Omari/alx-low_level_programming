#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to function.
 *
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	int i = 0;
	char *separator, *str;

	va_start(pa, format);

	if (format)
	{
	while (format[i])
	{
		switch (format[i])
	{
	case 'c':
		printf("%s%c", separator, va_arg(pa, int));
		break;
	case 'i':
		printf("%s%d", separator, va_arg(pa, int));
		break;
	case 'f':
		printf("%s%f", separator, va_arg(pa, double));
		break;
	case 's':
		str = va_arg(pa, char *);

		if (str == NULL)
		str = "(nil)";
		printf("%s%s", separator, str);
		break;
	default:
	i++;
	continue;
	}
	separator = ", ";
	i++;
	}
	}
	printf("\n");
	va_end(pa);
}
