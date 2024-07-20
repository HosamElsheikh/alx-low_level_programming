#include "main.h"

/**
 * _calloc - allocates memory and setting all values to 0
 * @nmemb: number of elements
 * @size: Size of the memory
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ret = malloc(size * nmemb);
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *) ret + i);
	}
	return (ret);
}
