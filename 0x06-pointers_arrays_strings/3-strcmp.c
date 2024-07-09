#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: -ve if less than, zero if same, 1 if more than
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ret;

	while (s1[i] != '\0')
	{
		ret = s1[i] - s2[i];
		if (ret != 0)
		{
			return (ret);
		}
		i++;
	}
	return (0);
}
