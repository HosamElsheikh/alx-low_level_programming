#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of ints
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *current;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		current = va_arg(ap, char *);
		if (current)
		{
			printf("%s", current);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
