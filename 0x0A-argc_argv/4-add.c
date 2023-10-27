#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The string to check
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}

	return (1);
}

/**
 * main - Entry point
 * Description: Adds positive numbers and prints the result
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			result += atoi(argv[i]);
		}
		else
		{

			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", result);
	return (0);
}
