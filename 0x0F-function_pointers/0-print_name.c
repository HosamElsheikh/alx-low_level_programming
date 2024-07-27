#include "main.h"

/**
 * print_name - A function that leads to printing names
 * @name: The string
 * @f: The function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
