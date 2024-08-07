#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: The array
 * @size: The size of the array
 * @action: The function you will execute on the array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
