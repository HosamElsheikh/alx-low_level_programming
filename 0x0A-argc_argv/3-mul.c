#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Multiplies two numbers and prints the result
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int result;
	int i;

	result = 1;
	if (argc < 3)
		return (1);
	
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	
	printf("%d\n", result);
	
	return (0);
}
