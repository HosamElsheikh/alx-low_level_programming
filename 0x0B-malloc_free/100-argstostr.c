#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program with newline characters
 * @ac: Argument count
 * @av: Array of argument strings
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	int index;
	char *arg;
	char *result;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			total_length++;
			arg++;
		}
	}

	total_length += ac;

	result = (char *)malloc(total_length + ac + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			result[index++] = *arg;
			arg++;
		}
		result[index++] = '\n';
	}

	result[total_length] = '\0';

	return (result);
}
