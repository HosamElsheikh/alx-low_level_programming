#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: A list of types of arguments passed to the function.
 * @...: The values to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	const char *current_format;
    
	va_start(args, format);

	while (format && format[i])
	{
		current_format = &format[i];

		if ((current_format[0] == 'c' || current_format[0] == 'i' ||
		current_format[0] == 'f' || current_format[0] == 's'))
		{
			printf("%s", separator);

			switch (current_format[0])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					{
						char *str = va_arg(args, char *);
						if (str == NULL)
							printf("(nil)");
						else
							printf("%s", str);
						break;
					}
				default:
					break;
			}
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
