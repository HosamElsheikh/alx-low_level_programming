#include "main.h"

/**
 * swap_int - interchange the values of two ints
 * @a: First int
 * @b: Second int
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
