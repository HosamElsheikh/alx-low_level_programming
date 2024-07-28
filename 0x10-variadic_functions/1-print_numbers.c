#include "variadic_functions.h"

/**
 * print_numbers - print the numbers
 * @separator: Separator betwenn the numbers
 * @n: Their number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ap, int));
			break;
		}
		printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
}
