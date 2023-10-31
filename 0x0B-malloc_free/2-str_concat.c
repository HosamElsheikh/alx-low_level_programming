#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int i;
	int j;
	char *ar;
	int k1;
	int k2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		size1++;

	size2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
		size2++;

	ar = malloc((size1 + size2 + 1) * sizeof(char));
	if (ar == 0)
		return (NULL);

	for (k1 = 0; k1 < size1; k1++)
	{
		ar[k1] = s1[k1];
	}

	for (k2 = 0; k2 <= size2; k2++)
	{
		ar[k1] = s2[k2];
		k1++;
	}

	return (ar);
}
