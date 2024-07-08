#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string
 */
void rev_string(char *s)
{
	char tmp;
	int size = 0;
	int i;

	while (s[size] != '\0')
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		tmp = s[i];
		s[i] = s[size - 1];
		s[size - 1] = tmp;
		size--;
	}
}
