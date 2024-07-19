#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: The array of arguments
 * Return: Pointer to an array of strings
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *ret;
	int char_length;
	char *tmp;
	int space = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		tmp = av[i];
		while (*tmp != '\0')
		{
			tmp++;
			char_length++;
		}
	}
	char_length += ac;
	ret = malloc(sizeof(char) * char_length + 1);
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		tmp = av[i];
		while (*tmp != '\0')
		{
			ret[space] = *tmp;
			space++;
			tmp++;
		}
		ret[space] = '\n';
		space++;
	}
	ret[char_length] = '\0';
	return (ret);
}
